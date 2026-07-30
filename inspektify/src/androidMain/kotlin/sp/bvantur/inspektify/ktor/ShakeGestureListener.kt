package sp.bvantur.inspektify.ktor

import android.content.Context
import android.hardware.Sensor
import android.hardware.SensorEvent
import android.hardware.SensorEventListener
import android.hardware.SensorManager
import android.os.SystemClock
import androidx.lifecycle.DefaultLifecycleObserver
import androidx.lifecycle.LifecycleOwner
import sp.bvantur.inspektify.ktor.client.shared.startInspektifyWindow
import kotlin.math.sqrt

internal class ShakeGestureListener : DefaultLifecycleObserver {

    private val sensorManager: SensorManager? = applicationContext.getSystemService(
        Context.SENSOR_SERVICE
    ) as? SensorManager

    private var overThresholdSamples = 0
    private var lastTriggerAt = 0L

    private val sensorListener: SensorEventListener = object : SensorEventListener {
        override fun onSensorChanged(event: SensorEvent) {
            if (InspektifyActivity.inspektifyActivityInstance != null) return

            val now = SystemClock.elapsedRealtime()
            if (now - lastTriggerAt < COOLDOWN_MS) return

            val magnitude = sqrt(
                event.values[0] * event.values[0] +
                    event.values[1] * event.values[1] +
                    event.values[2] * event.values[2]
            )

            if (magnitude > SHAKE_THRESHOLD) {
                overThresholdSamples++
                if (overThresholdSamples >= REQUIRED_CONSECUTIVE_SAMPLES) {
                    lastTriggerAt = now
                    overThresholdSamples = 0
                    startInspektifyWindow()
                }
            } else {
                overThresholdSamples = 0
            }
        }

        override fun onAccuracyChanged(sensor: Sensor, accuracy: Int) {}
    }

    override fun onResume(owner: LifecycleOwner) {
        val sensor = sensorManager?.getDefaultSensor(Sensor.TYPE_LINEAR_ACCELERATION) ?: return
        sensorManager.registerListener(sensorListener, sensor, SensorManager.SENSOR_DELAY_GAME)
    }

    override fun onPause(owner: LifecycleOwner) {
        sensorManager?.unregisterListener(sensorListener)
        overThresholdSamples = 0
    }

    private companion object {
        const val SHAKE_THRESHOLD = 12f
        const val REQUIRED_CONSECUTIVE_SAMPLES = 3
        const val COOLDOWN_MS = 1000L
    }
}

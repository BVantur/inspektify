package sp.bvantur.inspektify.ktor

import android.content.Context
import android.hardware.Sensor
import android.hardware.SensorEvent
import android.hardware.SensorEventListener
import android.hardware.SensorManager
import androidx.lifecycle.DefaultLifecycleObserver
import androidx.lifecycle.LifecycleOwner
import sp.bvantur.inspektify.ktor.client.shared.startInspektifyWindow
import kotlin.math.sqrt

internal class ShakeGestureListener : DefaultLifecycleObserver {

    private var sensorManager: SensorManager? = applicationContext.getSystemService(
        Context.SENSOR_SERVICE
    ) as? SensorManager
    private var activeAcceleration = 10f
    private var currentAcceleration = 0f
    private var lastAcceleration = 0f
    private val thresholdForAcceleration = 12f

    private val sensorListener: SensorEventListener = object : SensorEventListener {
        override fun onSensorChanged(event: SensorEvent) {
            if (InspektifyActivity.inspektifyActivityInstance != null) return

            val xCoordinate = event.values[0]
            val yCoordinate = event.values[1]
            val zCoordinate = event.values[2]
            lastAcceleration = currentAcceleration

            currentAcceleration = sqrt(
                xCoordinate * xCoordinate +
                    yCoordinate * yCoordinate +
                    zCoordinate * zCoordinate
            )
            val delta = currentAcceleration - lastAcceleration
            activeAcceleration = activeAcceleration * 0.9f + delta

            if (activeAcceleration > thresholdForAcceleration) {
                startInspektifyWindow()
            }
        }

        override fun onAccuracyChanged(sensor: Sensor, accuracy: Int) {}
    }

    init {
        currentAcceleration = SensorManager.GRAVITY_EARTH
        lastAcceleration = SensorManager.GRAVITY_EARTH
    }

    override fun onResume(owner: LifecycleOwner) {
        sensorManager?.registerListener(
            sensorListener,
            sensorManager?.getDefaultSensor(Sensor.TYPE_ACCELEROMETER),
            SensorManager.SENSOR_DELAY_NORMAL
        )
    }

    override fun onPause(owner: LifecycleOwner) {
        sensorManager?.unregisterListener(sensorListener)
    }
}

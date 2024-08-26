package sp.bvantur.inspektify

import android.content.Context
import android.content.Intent
import android.hardware.Sensor
import android.hardware.SensorEvent
import android.hardware.SensorEventListener
import android.hardware.SensorManager
import android.widget.Toast
import androidx.lifecycle.DefaultLifecycleObserver
import androidx.lifecycle.LifecycleOwner
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
                applicationContext.startActivity(
                    Intent(applicationContext, InspektifyActivity::class.java).also { intent ->
                        intent.flags = Intent.FLAG_ACTIVITY_NEW_TASK
                    }
                )
                Toast.makeText(applicationContext, "Inspektify tool launched", Toast.LENGTH_SHORT).show()
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

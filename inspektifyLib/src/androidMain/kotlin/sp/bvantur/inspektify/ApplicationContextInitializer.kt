package sp.bvantur.inspektify

import android.content.Context
import androidx.lifecycle.ProcessLifecycleOwner
import androidx.startup.Initializer

internal lateinit var applicationContext: Context

internal class ApplicationContextInitializer : Initializer<Context> {
    override fun create(context: Context): Context = context.also {
        applicationContext = it.applicationContext
        ProcessLifecycleOwner.get().lifecycle.addObserver(
            ShakeGestureListener()
        ) // TODO find a different way to start shake listener
    }

    override fun dependencies(): List<Class<out Initializer<*>>> = emptyList()
}

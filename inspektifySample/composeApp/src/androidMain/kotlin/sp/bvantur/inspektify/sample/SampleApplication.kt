package sp.bvantur.inspektify.sample

import android.app.Application
import sp.bvantur.inspektify.sample.di.KoinImpl

class SampleApplication : Application() {

    override fun onCreate() {
        super.onCreate()
        KoinImpl.initKoin()
    }
}

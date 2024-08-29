package sp.bvantur.inspektify.sample

import android.app.Application
import sp.bvantur.inspektify.sample.di.initKoin

class SampleApplication : Application() {

    override fun onCreate() {
        super.onCreate()
        initKoin()
    }
}

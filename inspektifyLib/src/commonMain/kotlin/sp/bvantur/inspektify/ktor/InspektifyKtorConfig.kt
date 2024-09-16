package sp.bvantur.inspektify.ktor

class InspektifyKtorConfig {
    var presentationType: PresentationType = PresentationType.AutoShake
}

sealed interface PresentationType {
    data object AutoShake : PresentationType
    data object Custom : PresentationType

    fun isCustom() = this == Custom
}

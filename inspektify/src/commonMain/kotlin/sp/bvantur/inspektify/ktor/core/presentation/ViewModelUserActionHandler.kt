package sp.bvantur.inspektify.ktor.core.presentation

internal interface ViewModelUserActionHandler<Action : UserAction> {
    fun onUserAction(userAction: Action)
}

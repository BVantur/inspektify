package sp.bvantur.inspektify.sample.presentation.fact

import sp.bvantur.inspektify.sample.domain.model.CatFact
import sp.bvantur.inspektify.sample.presentation.base.BaseViewState

data class CatFactViewState(
    val facts: List<CatFact> = listOf()
) : BaseViewState

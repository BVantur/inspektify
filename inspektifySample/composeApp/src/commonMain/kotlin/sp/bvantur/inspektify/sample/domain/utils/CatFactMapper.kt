package sp.bvantur.inspektify.sample.domain.utils

import sp.bvantur.inspektify.sample.data.catfact.CatFactRemote
import sp.bvantur.inspektify.sample.domain.model.CatFact

fun CatFactRemote.toCatFact() = CatFact(fact = this.fact)

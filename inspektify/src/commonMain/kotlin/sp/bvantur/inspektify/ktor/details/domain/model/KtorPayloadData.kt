package sp.bvantur.inspektify.ktor.details.domain.model

import androidx.compose.ui.text.AnnotatedString

// TODO remove androidx import from domain layer and add konsist test for it
internal data class KtorPayloadData(val headers: AnnotatedString, val payload: String)

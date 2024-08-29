package sp.bvantur.inspektify.sample.data.catfact

import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

@Serializable
data class CatFactRemote(
    @SerialName("fact")
    val fact: String,
    @SerialName("length")
    val length: Int
)

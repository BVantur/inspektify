package sp.bvantur.inspektify.sample.data.user

import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

@Serializable
data class CreateUserRemote(
    @SerialName("id")
    val id: UserId? = null,
    @SerialName("name")
    val name: String,
    @SerialName("job")
    val job: String,
    @SerialName("createdAt")
    val createdAt: String? = null
)

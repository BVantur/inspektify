package sp.bvantur.inspektify.sample.data.user

import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

@Serializable
data class CreateUserRemote(
    @SerialName("id")
    val id: UserId? = null,
    @SerialName("name")
    val name: String? = null,
    @SerialName("job")
    val job: String? = null,
    @SerialName("createdAt")
    val createdAt: String? = null
)

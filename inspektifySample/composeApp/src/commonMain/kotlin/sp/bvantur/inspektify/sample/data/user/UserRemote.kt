package sp.bvantur.inspektify.sample.data.user

import kotlinx.serialization.SerialName
import kotlinx.serialization.Serializable

typealias UserId = Int

@Serializable
data class UserRemote(
    @SerialName("data")
    val data: UserDataRemote?,
    @SerialName("support")
    val support: UserSupportRemote?
)

@Serializable
data class UserDataRemote(
    @SerialName("id")
    val id: UserId,
    @SerialName("email")
    val email: String,
    @SerialName("first_name")
    val firstName: String,
    @SerialName("last_name")
    val lastName: String,
    @SerialName("avatar")
    val avatar: String
)

@Serializable
data class UserSupportRemote(
    @SerialName("url")
    val url: String,
    @SerialName("text")
    val text: String
)

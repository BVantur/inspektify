package sp.bvantur.inspektify.sample.data.user

class UserRepository(private val remoteDataSource: UserRemoteDataSource) {
    suspend fun getUser(userId: UserId): Result<UserRemote> = remoteDataSource.getUser(userId)
    suspend fun createUser(
        user: CreateUserRemote = CreateUserRemote(
            name = "Blaž",
            job = "Android Developer"
        )
    ): Result<CreateUserRemote> = remoteDataSource.createUser(user)
}

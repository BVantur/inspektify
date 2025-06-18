@file:Suppress("ktlint:standard:max-line-length")

package sp.bvantur.inspektify.ktor.client.data

import dev.mokkery.answering.returns
import dev.mokkery.everySuspend
import dev.mokkery.matcher.any
import dev.mokkery.mock
import dev.mokkery.verify.VerifyMode
import dev.mokkery.verifySuspend
import kotlinx.coroutines.test.runTest
import sp.bvantur.inspektify.ktor.DataRetentionPolicy
import sp.bvantur.inspektify.ktor.client.di.KtorModule.networkTrafficRepository
import sp.bvantur.inspektify.ktor.core.data.KtorPluginCachedConfig
import sp.bvantur.inspektify.ktor.core.di.AppComponents.cachedConfig
import sp.bvantur.inspektify.ktor.core.di.AppComponents.inspektifyDataRetentionHandler
import sp.bvantur.inspektify.ktor.core.domain.NetworkTrafficRepository
import kotlin.test.BeforeTest
import kotlin.test.Test
import kotlin.test.assertEquals
import kotlin.test.assertNotNull
import kotlin.test.assertTrue

class InspektifyDataRetentionHandlerTest {
    @BeforeTest
    fun setup() {
        networkTrafficRepository = mock<NetworkTrafficRepository>()
        cachedConfig = KtorPluginCachedConfig()
        inspektifyDataRetentionHandler = InspektifyDataRetentionHandler()
    }

    @Test
    fun `GIVEN day retention policy is set as negative number WHEN configureDataRetentionPolicy is called THEN returns 1 day as retention policy`() {
        runTest {
            everySuspend { networkTrafficRepository.applyRetentionPolicyByDays(any()) } returns Unit

            inspektifyDataRetentionHandler.configureDataRetentionPolicy(DataRetentionPolicy.DayDuration(-3))

            assertNotNull(cachedConfig.retentionPolicy)
            assertTrue {
                cachedConfig.retentionPolicy is DataRetentionPolicy.DayDuration
            }
            assertEquals(getDayDuration()?.numOfDays, 1)
            verifySuspend { networkTrafficRepository.applyRetentionPolicyByDays(any()) }
        }
    }

    @Test
    fun `GIVEN day retention policy is set as 0 WHEN configureDataRetentionPolicy is called THEN returns 1 day as retention policy`() {
        runTest {
            everySuspend { networkTrafficRepository.applyRetentionPolicyByDays(any()) } returns Unit

            inspektifyDataRetentionHandler.configureDataRetentionPolicy(DataRetentionPolicy.DayDuration(0))

            assertNotNull(cachedConfig.retentionPolicy)
            assertTrue {
                cachedConfig.retentionPolicy is DataRetentionPolicy.DayDuration
            }
            assertEquals(getDayDuration()?.numOfDays, 1)
            verifySuspend { networkTrafficRepository.applyRetentionPolicyByDays(any()) }
        }
    }

    @Test
    fun `GIVEN day retention policy is set 13 WHEN configureDataRetentionPolicy is called THEN returns 13 day as retention policy`() {
        runTest {
            everySuspend { networkTrafficRepository.applyRetentionPolicyByDays(any()) } returns Unit

            inspektifyDataRetentionHandler.configureDataRetentionPolicy(DataRetentionPolicy.DayDuration(13))

            assertNotNull(cachedConfig.retentionPolicy)
            assertTrue {
                cachedConfig.retentionPolicy is DataRetentionPolicy.DayDuration
            }
            assertEquals(getDayDuration()?.numOfDays, 13)
            verifySuspend { networkTrafficRepository.applyRetentionPolicyByDays(any()) }
        }
    }

    @Test
    fun `GIVEN day retention policy is set 14 WHEN configureDataRetentionPolicy is called THEN returns 14 day as retention policy`() {
        runTest {
            everySuspend { networkTrafficRepository.applyRetentionPolicyByDays(any()) } returns Unit

            inspektifyDataRetentionHandler.configureDataRetentionPolicy(DataRetentionPolicy.DayDuration(14))

            assertNotNull(cachedConfig.retentionPolicy)
            assertTrue {
                cachedConfig.retentionPolicy is DataRetentionPolicy.DayDuration
            }
            assertEquals(getDayDuration()?.numOfDays, 14)
            verifySuspend { networkTrafficRepository.applyRetentionPolicyByDays(any()) }
        }
    }

    @Test
    fun `GIVEN day retention policy is set above 14 WHEN configureDataRetentionPolicy is called THEN returns 14 day as retention policy`() {
        runTest {
            everySuspend { networkTrafficRepository.applyRetentionPolicyByDays(any()) } returns Unit

            inspektifyDataRetentionHandler.configureDataRetentionPolicy(DataRetentionPolicy.DayDuration(145))

            assertNotNull(cachedConfig.retentionPolicy)
            assertTrue {
                cachedConfig.retentionPolicy is DataRetentionPolicy.DayDuration
            }
            assertEquals(getDayDuration()?.numOfDays, 14)
            verifySuspend { networkTrafficRepository.applyRetentionPolicyByDays(any()) }
        }
    }

    @Test
    fun `GIVEN session retention policy is set as negative number WHEN configureDataRetentionPolicy is called THEN returns 1 session as retention policy`() {
        runTest {
            everySuspend { networkTrafficRepository.getAllSessionsIds() } returns emptyList()
            everySuspend { networkTrafficRepository.applyRetentionPolicyBySessions(any()) } returns Unit

            inspektifyDataRetentionHandler.configureDataRetentionPolicy(DataRetentionPolicy.SessionCount(-3))

            assertNotNull(cachedConfig.retentionPolicy)
            assertTrue {
                cachedConfig.retentionPolicy is DataRetentionPolicy.SessionCount
            }
            assertEquals(getSessionCount()?.numOfSessions, 1)
            verifySuspend { networkTrafficRepository.getAllSessionsIds() }
            verifySuspend(mode = VerifyMode.not) { networkTrafficRepository.applyRetentionPolicyBySessions(any()) }
        }
    }

    @Test
    fun `GIVEN session retention policy is set as 0 WHEN configureDataRetentionPolicy is called THEN returns 1 session as retention policy`() {
        runTest {
            everySuspend { networkTrafficRepository.getAllSessionsIds() } returns emptyList()
            everySuspend { networkTrafficRepository.applyRetentionPolicyBySessions(any()) } returns Unit

            inspektifyDataRetentionHandler.configureDataRetentionPolicy(DataRetentionPolicy.SessionCount(0))

            assertNotNull(cachedConfig.retentionPolicy)
            assertTrue {
                cachedConfig.retentionPolicy is DataRetentionPolicy.SessionCount
            }
            assertEquals(getSessionCount()?.numOfSessions, 1)
            verifySuspend { networkTrafficRepository.getAllSessionsIds() }
            verifySuspend(mode = VerifyMode.not) { networkTrafficRepository.applyRetentionPolicyBySessions(any()) }
        }
    }

    @Test
    fun `GIVEN session retention policy is set as 19 WHEN configureDataRetentionPolicy is called THEN returns 19 session as retention policy`() {
        runTest {
            everySuspend { networkTrafficRepository.getAllSessionsIds() } returns emptyList()
            everySuspend { networkTrafficRepository.applyRetentionPolicyBySessions(any()) } returns Unit

            inspektifyDataRetentionHandler.configureDataRetentionPolicy(DataRetentionPolicy.SessionCount(19))

            assertNotNull(cachedConfig.retentionPolicy)
            assertTrue {
                cachedConfig.retentionPolicy is DataRetentionPolicy.SessionCount
            }
            assertEquals(getSessionCount()?.numOfSessions, 19)
            verifySuspend { networkTrafficRepository.getAllSessionsIds() }
            verifySuspend(mode = VerifyMode.not) { networkTrafficRepository.applyRetentionPolicyBySessions(any()) }
        }
    }

    @Test
    fun `GIVEN session retention policy is set as 20 WHEN configureDataRetentionPolicy is called THEN returns 20 session as retention policy`() {
        runTest {
            everySuspend { networkTrafficRepository.getAllSessionsIds() } returns emptyList()
            everySuspend { networkTrafficRepository.applyRetentionPolicyBySessions(any()) } returns Unit

            inspektifyDataRetentionHandler.configureDataRetentionPolicy(DataRetentionPolicy.SessionCount(20))

            assertNotNull(cachedConfig.retentionPolicy)
            assertTrue {
                cachedConfig.retentionPolicy is DataRetentionPolicy.SessionCount
            }
            assertEquals(getSessionCount()?.numOfSessions, 20)
            verifySuspend { networkTrafficRepository.getAllSessionsIds() }
            verifySuspend(mode = VerifyMode.not) { networkTrafficRepository.applyRetentionPolicyBySessions(any()) }
        }
    }

    @Test
    fun `GIVEN session retention policy is set above 20 WHEN configureDataRetentionPolicy is called THEN returns 20 session as retention policy`() {
        runTest {
            everySuspend { networkTrafficRepository.getAllSessionsIds() } returns emptyList()
            everySuspend { networkTrafficRepository.applyRetentionPolicyBySessions(any()) } returns Unit

            inspektifyDataRetentionHandler.configureDataRetentionPolicy(DataRetentionPolicy.SessionCount(203))

            assertNotNull(cachedConfig.retentionPolicy)
            assertTrue {
                cachedConfig.retentionPolicy is DataRetentionPolicy.SessionCount
            }
            assertEquals(getSessionCount()?.numOfSessions, 20)
            verifySuspend { networkTrafficRepository.getAllSessionsIds() }
            verifySuspend(mode = VerifyMode.not) { networkTrafficRepository.applyRetentionPolicyBySessions(any()) }
        }
    }

    @Test
    fun `GIVEN session retention policy threshold is fulfilled WHEN configureDataRetentionPolicy is called THEN also clearing of old session happens`() {
        runTest {
            everySuspend { networkTrafficRepository.getAllSessionsIds() } returns listOf(1L, 2L)
            everySuspend { networkTrafficRepository.applyRetentionPolicyBySessions(any()) } returns Unit

            inspektifyDataRetentionHandler.configureDataRetentionPolicy(DataRetentionPolicy.SessionCount(2))

            verifySuspend { networkTrafficRepository.applyRetentionPolicyBySessions(any()) }
            verifySuspend { networkTrafficRepository.getAllSessionsIds() }
        }
    }

    private fun getDayDuration(): DataRetentionPolicy.DayDuration? =
        cachedConfig.retentionPolicy as? DataRetentionPolicy.DayDuration

    private fun getSessionCount(): DataRetentionPolicy.SessionCount? =
        cachedConfig.retentionPolicy as? DataRetentionPolicy.SessionCount
}

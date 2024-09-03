package sp.bvantur.inspektify.sample.ui

import androidx.compose.foundation.layout.Column
import androidx.compose.foundation.layout.fillMaxWidth
import androidx.compose.foundation.layout.padding
import androidx.compose.foundation.lazy.LazyColumn
import androidx.compose.material.Button
import androidx.compose.material.Card
import androidx.compose.material.MaterialTheme
import androidx.compose.material.Text
import androidx.compose.runtime.Composable
import androidx.compose.runtime.getValue
import androidx.compose.ui.Alignment
import androidx.compose.ui.Modifier
import androidx.compose.ui.unit.dp
import androidx.lifecycle.compose.collectAsStateWithLifecycle
import org.jetbrains.compose.ui.tooling.preview.Preview
import org.koin.compose.viewmodel.koinViewModel
import org.koin.core.annotation.KoinExperimentalAPI
import sp.bvantur.inspektify.sample.presentation.user.UserViewModel

@OptIn(KoinExperimentalAPI::class)
@Composable
@Preview
fun App() {
    val viewModel = koinViewModel<UserViewModel>()

    val viewState by viewModel.viewStateFlow.collectAsStateWithLifecycle()

    MaterialTheme {
        Column(Modifier.fillMaxWidth(), horizontalAlignment = Alignment.CenterHorizontally) {
            Button(onClick = viewModel::onGetNextUserAction) {
                Text("Get User")
            }
            Button(onClick = viewModel::onCreateUserAction) {
                Text("Create a User")
            }
            Text(
                modifier = Modifier.padding(start = 8.dp, top = 8.dp, end = 8.dp),
                text = "Users",
                style = MaterialTheme.typography.h3
            )
            LazyColumn(modifier = Modifier.fillMaxWidth()) {
                items(viewState.users.size) { index ->
                    Card(modifier = Modifier.fillMaxWidth().padding(all = 16.dp)) {
                        Column {
                            Text(
                                modifier = Modifier.padding(start = 8.dp, top = 8.dp, end = 8.dp),
                                text = "${index + 1}. User"
                            )
                            Text(
                                modifier = Modifier.padding(start = 8.dp, top = 8.dp, end = 8.dp),
                                text = "First name: ${viewState.users[index].firstName}"
                            )
                            Text(
                                modifier = Modifier.padding(start = 8.dp, top = 8.dp, end = 8.dp),
                                text = "Last name: ${viewState.users[index].lastName}"
                            )
                            Text(
                                modifier = Modifier.padding(all = 8.dp),
                                text = "Email: ${viewState.users[index].email}"
                            )
                        }
                    }
                }
            }
        }
    }
}

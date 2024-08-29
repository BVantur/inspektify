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
import org.jetbrains.compose.ui.tooling.preview.Preview
import org.koin.compose.viewmodel.koinViewModel
import org.koin.core.annotation.KoinExperimentalAPI
import sp.bvantur.inspektify.sample.presentation.fact.CatFactViewModel
import sp.bvantur.inspektify.sample.shared.collectWithLifecycle

@OptIn(KoinExperimentalAPI::class)
@Composable
@Preview
fun App() {
    val viewModel = koinViewModel<CatFactViewModel>()

    val viewState by viewModel.viewStateFlow.collectWithLifecycle()

    MaterialTheme {
        Column(Modifier.fillMaxWidth(), horizontalAlignment = Alignment.CenterHorizontally) {
            Button(onClick = viewModel::onGetNewFactAction) {
                Text("Get new Cat Fact")
            }
            LazyColumn(modifier = Modifier.fillMaxWidth()) {
                items(viewState.facts.size) { index ->
                    Card(modifier = Modifier.fillMaxWidth().padding(all = 16.dp)) {
                        Column {
                            Text(
                                modifier = Modifier.padding(start = 8.dp, top = 8.dp, end = 8.dp),
                                text = "${index + 1}. Fact"
                            )
                            Text(
                                modifier = Modifier.padding(all = 8.dp),
                                text = viewState.facts[index].fact
                            )
                        }
                    }
                }
            }
        }
    }
}

#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

const int INF = INT_MAX;

int main(){

	size_t N, K;
	cin>>N>>K;

	vector<vector<pair<int, int>>> adj(N);
	
	for(size_t i=0; i<K; i++){
		
		int from, to, peso;
		cin>>from>>to>>peso;

		adj[from].push_back({to, peso});
		adj[to].push_back({from, peso});
	}

	priority_queue<pair<int, int>> toVisit;
	vector<bool> visited(N, false);
	vector<int> distance(N, INF);

	distance[0] = 0;

	toVisit.push({0, 0});

	while(!toVisit.empty()){

		int nodo = toVisit.top().second;
		toVisit.pop();

		if(visited[nodo])
			continue;

		visited[nodo] = true;

		for(size_t i=0; i<adj[nodo].size(); i++){

			int child = adj[nodo][i].first;
			int peso = adj[nodo][i].second;

			if(distance[nodo] + peso < distance[child]){

				distance[child] = distance[nodo] + peso;
				toVisit.push({-distance[child], child});
			}
		}
	}

	cout<<"distanza dal nodo 0 al nodo "<<N-1<<": "<<distance[N-1]<<endl;

	return 0;
}

#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> adj;
vector<bool> visited;

void dfs(int nodo){

	if(visited[nodo])
		return;

	visited[nodo] = true;

	for(size_t i=0; i<adj[nodo].size(); i++){
		
		int child = adj[nodo][i];
		dfs(child);
	}
}

int main(){

	size_t N, K;
	cin>>N>>K;

	adj.resize(N);
	visited.resize(N, false);
	
	for(size_t i=0; i<K; i++){
		
		int from, to;
		cin>>from>>to;

		adj[from].push_back(to);
	}

	dfs(0);

	bool isConnected = true;

	for(size_t i=0; i<N; i++)
		if(visited[i] == false)
			isConnected = false;

	if(isConnected)
		cout<<"grafo connesso"<<endl;
	else
		cout<<"grafo non connesso"<<endl;

	return 0;
}

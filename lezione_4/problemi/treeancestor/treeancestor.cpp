#include <iostream>
#include <vector>

using namespace std;

size_t N, K;

vector<vector<int>> adj;
vector<vector<int>> ancestors;

void dfs(int nodo, int depth){

	for(size_t i=1; i<=K && i<=depth; i++){
		int parent = ancestors[nodo][1];
		ancestors[nodo][i] = ancestors[parent][i-1];
	}

	for(size_t i=0; i<adj[nodo].size(); i++){
		int child = adj[nodo][i];
		dfs(child, depth+1);
	}
}

int main(){

	cin>>N>>K;

	adj.resize(N);
	ancestors.resize(N, vector<int>(K+1));

	for(size_t i=0; i<N-1; i++){
		
		int from, to;
		cin>>from>>to;

		adj[from].push_back(to);

		ancestors[to][0] = to;
		ancestors[to][1] = from;
	}

	dfs(0, 0);

	for(size_t i=0; i<N; i++){
		cout<<ancestors[i][K]<<endl;
	}

	return 0;
}

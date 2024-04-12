#include <bits/stdc++.h>

using namespace std;

#define FILE

int N, M;
int ans=0;

vector<vector<int>> adj;

bool visitati[10001];


void dfs(int s){
	
	visitati[s] = true;
	
	for(int i=0; i<adj[s].size(); ++i){
	
		if(!visitati[adj[s][i]])
			dfs(adj[s][i]);
	}
	
}


int main(){
	
	#ifdef FILE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	cin>>N>>M;
	
	adj.resize(N);
	
	int nodo_p, nodo_a;
	
	for(int i=0; i<M; ++i){
		
		cin>>nodo_p>>nodo_a;
		adj[nodo_p].push_back(nodo_a);
		adj[nodo_a].push_back(nodo_p);
	}
	
	for(int i=0; i<N; ++i){
	
		if(!visitati[i]){
			dfs(i);
			ans++;
		}
	}
	
	cout<<ans-1;
	
	return 0;
}

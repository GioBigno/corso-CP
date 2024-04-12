#include <fstream>
#include <vector>

using namespace std;

int N, M;
int ans=0;

vector<vector<int>> adj;
vector<bool> visited;

void dfs(int nodo){
	
	visited[nodo] = true;
	
	for(size_t i=0; i<adj[nodo].size(); ++i){

		int child = adj[nodo][i];

		if(!visited[child]){
			dfs(child);
		}
	}	
}

int main(){
	
	ifstream in("input.txt");
	ofstream out("output.txt");
	
	in>>N>>M;
	
	adj.resize(N);
	visited.resize(N);
	
	for(size_t i=0; i<M; ++i){
		
		int from, to;
		in>>from>>to;

		adj[from].push_back(to);
		adj[to].push_back(from);
	}
	
	for(size_t i=0; i<N; ++i){
	
		if(!visited[i]){
			dfs(i);
			ans++;
		}
	}
	
	out<<ans-1;
	
	return 0;
}

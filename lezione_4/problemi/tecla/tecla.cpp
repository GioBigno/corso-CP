#include <fstream>
#include <vector>

using namespace std;

#define LIMIT 31
#define VISITATO_SLURP 1
#define VISITATO_BLEAH 0

vector<vector<int>> adj;
vector<vector<bool>> visitati;
vector<int> soluzione;

bool dfs(int nodo, int stato){
	
	if(nodo == 0 && stato == VISITATO_SLURP)
		return true;
	
	if(visitati[nodo][stato] == true)
		return false;
	
	visitati[nodo][stato] = true;

	for(size_t i=0; i<adj[nodo].size(); ++i){
	
		int vicino = adj[nodo][i];
				
		if(dfs(vicino, stato==VISITATO_SLURP ? VISITATO_BLEAH : VISITATO_SLURP)){
			soluzione.push_back(vicino);
			return true;
		}
	
	}
	
	return false;

}

int main(){
	
	ifstream in("input.txt");
	ofstream out("output.txt");

	size_t N, M;
	in>>N>>M;
	
	adj.resize(N);
	visitati.resize(N, {false, false});
	
	for(size_t i=0; i<M; i++){
	
		int u, v;
		in>>u>>v;
		
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	
	dfs(0, VISITATO_BLEAH);
	
	out<<soluzione.size()<<"\n";
	
	for(size_t i=0; i<soluzione.size(); i++){
		out<<soluzione[i]<<" ";
	}

	out<<0;
	
	return 0;
}

#include <fstream>
#include <vector>

using namespace std;

int ans=0;

vector <vector <int>> adj;
vector<bool> visited;
vector<int> monete;

void dfs(int nodo){

    visited[nodo] = true;

    ans += monete[nodo];

    for(size_t i=0; i<adj[nodo].size(); i++){

		int child = adj[nodo][i];

        if(visited[child] == false)
            dfs(child);
	}
}

int main() {
    int N, M;
    
	ifstream in("input.txt");
	ofstream out("output.txt");

	in>>N>>M;

    adj.resize(N);
	visited.resize(N);
	monete.resize(N);
    
	for(size_t i=0; i<N; i++){
        in>>monete[i];
	}

	for(size_t i=0; i<M; i++){
		
		int from, to;
		in>>from>>to;

        adj[from].push_back(to);
        adj[to].push_back(from);
    }

    dfs(0);

	out<<ans<<endl;

    return 0;
}

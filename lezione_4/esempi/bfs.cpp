#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main(){

	size_t N, K;
	cin>>N>>K;

	vector<vector<int>> adj(N);
	
	for(size_t i=0; i<K; i++){
		
		int from, to;
		cin>>from>>to;

		adj[from].push_back(to);
	}

	queue<int> toVisit;
	vector<bool> visited(N, false);

	toVisit.push(0);

	while(!toVisit.empty()){

		int nodo = toVisit.front();
		toVisit.pop();

		cout<<"sto visitando il nodo "<<nodo<<endl;

		for(size_t i=0; i<adj[nodo].size(); i++){

			int child = adj[nodo][i];

			if(!visited[child]){
				visited[child] = true;
				toVisit.push(child);
			}
		}
	}

	return 0;
}

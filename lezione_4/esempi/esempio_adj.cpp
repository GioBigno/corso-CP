#include <iostream>
#include <vector>

using namespace std;

int main(){

	int N, K;
	cin>>N>>K;

	vector<vector<int>> adj(N);
	
	for(int i=0; i<K; i++){
		
		int from, to;
		cin>>from>>to;

		adj[from].push_back(to);
		adj[to].push_back(from);
	}

	return 0;
}

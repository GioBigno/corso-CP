#include <iostream>
#include <vector>

using namespace std;

int main(){

	int N, K;
	cin>>N>>K;

	vector<vector<pair<int, int>>> adj(N);
	
	for(int i=0; i<K; i++){
		
		int from, to, peso;
		cin>>from>>to>>peso;

		adj[from].push_back({to, peso});
	}

	return 0;
}

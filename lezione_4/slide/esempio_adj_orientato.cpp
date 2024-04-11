#include <iostream>
#include <vector>

using namespace std;

int main(){


	int K;
	cin>>K;

	vector<vector<int>> adj;
	
	for(int i=0; i<K; i++){
		
		int from, to;
		cin>>from>>to;

		adj[from].push_back(to);
	}

	return 0;
}

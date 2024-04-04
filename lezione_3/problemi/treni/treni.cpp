#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

	size_t N;
	cin>>N;

	vector<pair<int, int>> sol(N);
	
	sol[0] = {0, 0};
	cin>>sol[1].first>>sol[1].second;

	for(size_t i=2; i<N; i++){

		int S, H;
		cin>>S>>H;

		sol[i].first = max(sol[i-1].first, sol[i-1].second) + S;

		sol[i].second = max(sol[i-2].first, sol[i-2].second) + H;
	}

	cout<<max(sol[N-1].first, sol[N-1].second);

	return 0;
}

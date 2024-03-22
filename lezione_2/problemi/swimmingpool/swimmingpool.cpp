#include <bits/stdc++.h>

using namespace std;

int main(){

    size_t N;
    cin >> N;

	vector<int> pos(N);

    for(size_t i=0; i<N; i++){
        cin>>pos[i];
    }

    int current =0;
    int global = pos[N-1] - pos[0];

    for(size_t i=0; i<N; i++){
        int distance_start = pos[i] - pos[0];
        int distance_end = pos[N-1] - pos[i];

		current = max(distance_start, distance_end);
		global = min(global, current); 
    }

    cout<<global;

    return 0;
}

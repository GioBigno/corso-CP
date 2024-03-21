#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    int64_t N;
    cin>>N;

    vector<int64_t> v(N);

    for(int i=0; i<N; i++)
		cin>>v[i];

    sort(v.begin(), v.end());

    int64_t ans=1, costo=1;

    for(int i=1; i<N; i++){
		if(v[i] > v[i-1])
			costo++;
		ans+=costo;
    }

	cout<<ans<<endl;

	return 0;
}

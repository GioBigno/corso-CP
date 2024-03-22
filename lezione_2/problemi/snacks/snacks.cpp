#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	
	size_t ans = 0;
	size_t N, X;
	cin>>N>>X;
	
	vector<int> v(N);
		
	for(size_t i=0; i<N; i++)
		cin>>v[i];
		
	sort(begin(v), end(v));
	
	size_t i=0;
	for(i=0; i<N-1; i+=2){
		if(v[i]+v[i+1] <= X)
			ans++;
		else
			break;
	}
	ans += N - i; 
	cout<<ans<<endl;

	return 0;
}

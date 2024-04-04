#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

	ifstream in("input.txt");
	ofstream out("output.txt");

	size_t N;
	in>>N;

	vector<int> v(N);

	for(size_t i=0; i<N; i++){		
		in>>v[i];
	}

	vector<int> dp(N, 1);

	for(size_t i=1; i<N; i++){

		for(int j=i-1; j>=0; j--){
			if(v[i] < v[j]){
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
	}

	out<<*max_element(dp.begin(), dp.end());

	return 0;
}

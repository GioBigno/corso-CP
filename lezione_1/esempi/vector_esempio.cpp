#include <iostream>
#include <vector>

using namespace std;

int main(){

	int N;
	cin>>N;

	vector<int> v;

	for(int i=0; i<N; i++){
		int temp;
		cin>>temp;
		v.push_back(temp);
	}

	return 0;
}

#include <iostream>
#include <vector>

using namespace std;

int main(){

	size_t N, C;
	cin>>N>>C;
	
	vector<int> lights(N);
	vector<int> numOn(C);

	for(size_t i=0; i<N; i++){
		cin>>lights[i];
		numOn[lights[i]]++;
	}
	
	int left = 0;
	int right = N-1;
	bool end = false;
	
	while(left <= right && end==false){
		
		end = true;
	
		//posso togliere a sinistra
		if(numOn[lights[left]] - 1 > 0){
			numOn[lights[left]]--;
			left++;
			end = false;
		}
		
		//posso togliere destra
		if(numOn[lights[right]] - 1 > 0){
			numOn[lights[right]]--;
			right--;
			end = false;
		}
	}

	cout<<right-left+1<<endl;

	return 0;
}

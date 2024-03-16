#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int binary_search(vector<int> v, int target){

	auto result = lower_bound(v.begin(), v.end(), target);

	if(result == v.end()){
		return -1;
	}else{
		return (*result == target) ? (result - v.begin()) : -1;
	}
}

int main(){
	vector<int> v = {1, 2, 4, 5, 5, 6};

	for(size_t i=0; i<v.size()+1; i++){

		int result = binary_search(v, i);

		cout<<"cerco "<<i<<" -> ";

		if(result == -1){
			cout<<"elemento non presente nell'array\n";
		}else{
			cout<<"elemento presente in posizione: "<<result<<"\n";
		}
	}
	
	return 0;
}


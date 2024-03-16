
#include <iostream>
using namespace std;

int binary_search(int *arr, size_t n, int target){

	int *result = lower_bound(arr, arr+n, target);

	if(result == arr+n){
		return -1;
	}else{
		return (*result == target) ? (result - arr) : -1;
	}
}

int main(){
	int arr[] = {1, 2, 4, 5, 5, 6};
	size_t n = sizeof(arr) / sizeof(int);

	for(size_t i=0; i<n+1; i++){

		int result = binary_search(arr, n, i);

		cout<<"cerco "<<i<<" -> ";

		if(result == -1){
			cout<<"elemento non presente nell'array\n";
		}else{
			cout<<"elemento presente in posizione: "<<result<<"\n";
		}
	}
	
	return 0;
}


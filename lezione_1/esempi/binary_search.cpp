#include <iostream>
using namespace std;

int binary_search(int *arr, size_t n, int target){

	size_t l = 0;
	size_t r = n-1;

	while (l <= r) {
		size_t mid = (l + r) / 2;

		if (arr[mid] == target)
			return mid;

		if (arr[mid] < target)
			l = mid + 1;
		else
			r = mid - 1;
	}

	return -1;
}

int main(){
	int arr[] = { 0, 2, 3, 4, 7, 8, 9, 11, 14};
	int target = 15;
	size_t n = sizeof(arr) / sizeof(int);

	int result = binary_search(arr, n, target);

	if(result == -1){
		cout<<"elemento non presente nell'array\n";
	}else{
		cout<<"elemento presente in posizione: " << result;
	}
	
	return 0;
}


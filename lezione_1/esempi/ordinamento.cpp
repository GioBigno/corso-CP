#include <iostream>

using namespace std;

void stampa_array(int *arr, size_t n){

	for(size_t i=0; i<n; i++){
		cout<<arr[i]<<(i!=n-1?", ":"\n");
	}
}

void ordina_array(int *arr, size_t n){

	for(size_t i=0; i<n; i++){

		int min = i;
		for(size_t j=i+1; j<n; j++){

			if(arr[j] < arr[min])
				min = j;
		}

		swap(arr[i], arr[min]);
	}
}

int main(){
	
	int arr[] = {6, 4, 9, 0, 1, 3, 2};
	const size_t n = sizeof(arr) / sizeof(int);

	stampa_array(arr, n);

	cout<<"ordino...\n";
	ordina_array(arr, n);

	stampa_array(arr, n);

	return 0;
}

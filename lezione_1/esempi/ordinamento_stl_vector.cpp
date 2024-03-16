#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void stampa_array(vector<int> v){

	for(size_t i=0; i<v.size(); i++){
		cout<<v[i]<<(i!=v.size()-1?", ":"\n");
	}
}

void ordina_array(vector<int> v){
	
	sort(v.begin(), v.end());
}

int main(){
	
	vector<int> v = {6, 4, 9, 0, 1, 3, 2};

	stampa_array(v);

	cout<<"ordino...\n";
	ordina_array(v);

	stampa_array(v);

	return 0;
}

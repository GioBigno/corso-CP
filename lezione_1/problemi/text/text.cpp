#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    size_t N, K;
    cin>>N>>K;

	vector<string> words(N);

    for(size_t i=0; i<N; i++){
       cin>>words[i];
    }

	size_t idx = 0;

	while(idx < words.size()){

		string line = "";
		line += words[idx];
		cout<<words[idx];
		idx++;

		while(idx < words.size() && line.size() + words[idx].size() + 1 <= K){
			line += " " + words[idx];
			cout<<" " + words[idx];
			idx++;
		}

		cout<<endl;
	}

	return 0;
}

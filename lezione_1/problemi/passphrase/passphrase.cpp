#include <iostream>
#include <string>

using namespace std;

void remove_one_char(string& str){
	
	for(size_t i=0; i<str.size() - 1; i++){
		if(str[i] < str[i+1]){
			str.erase(i, 1);
			return;
		}
	}

	str.erase(str.size()-1, 1);
}

int main() {

	size_t N, K;
	cin>>N>>K;

	string passphrase;
	cin>>passphrase;

	for(size_t i=0; i<K; i++)
		remove_one_char(passphrase);

	cout<<passphrase<<endl;

	return 0;
}

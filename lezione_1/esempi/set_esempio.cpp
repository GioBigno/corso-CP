#include <iostream>
#include <set>

using namespace std;

int main(){

	set<int> s;

	s.insert(1);
	s.insert(8);
	s.insert(4);
	s.insert(2);
	s.insert(4);


	cout<<"elemento da cercare: ";
	int target;
	cin>>target;

	if(s.find(target) != s.end()){
		cout<<"elemento presente\n";
	}else{
		cout<<"elemento non presente\n";
	}

	return 0;
}

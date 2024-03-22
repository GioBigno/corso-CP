#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool isValid(string& str){

	stack<char> s;
	
	for(size_t i=0; i<str.size(); i++){
		
		if(str[i] == '('){
			s.push(str[i]);
		}else{
			if(!s.empty() && s.top() == '('){
				s.pop();
			}
		}
	}

	return s.empty();
}

int main(){

	size_t N;
	cin>>N;

	string str;
	cin>>str;

	size_t count = 0;
	string ans;

	while(!isValid(str)){
	
		size_t left = str.find_first_of(')');
		size_t right = str.find_last_of('(');

		swap(str[left], str[right]);
		ans += to_string(left) + " " + to_string(right) + "\n";
		count++;
	}

	cout<<count<<endl;
	cout<<ans;

	return 0;
}

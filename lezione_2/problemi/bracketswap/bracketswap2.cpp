#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){

	size_t N;
	cin>>N;

	string str;
	cin>>str;

	vector<int> prefix_sum(N);
	size_t left = 0;
	size_t right = N-1;
	size_t count = 0;
	string ans;

	for(size_t i=0; i<str.size(); i++){
	
		if(i==0)
			prefix_sum[i] = (str[i]=='(' ? -1 : +1);
		else
			prefix_sum[i] = prefix_sum[i-1] + (str[i]=='(' ? -1 : +1);

		if(prefix_sum[i] > 0){

			while(str[left] != ')') left++;
			while(str[right] != '(') right--;

			swap(str[left], str[right]);
			prefix_sum[i] -= 2;

			count++;
			ans += to_string(left) + " " + to_string(right) + "\n";
		}
	}
	

	cout<<count<<endl;
	cout<<ans;

	return 0;
}

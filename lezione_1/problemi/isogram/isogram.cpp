#include <iostream>
#include <algorithm>
#include <string>
#include <map>

using namespace std;

bool comp(pair<char, int> x){
	return x.second > 2;
}

int main() {

	size_t N, ans=0;
    cin>>N;
	cin.ignore();

    for (size_t i=0; i<N; i++) {
    
		string s;
		getline(cin, s);

		map<char, size_t> occ;

		for(size_t j=0; j<s.size(); ++j){
			if(!isalpha(s[j]))
				continue;
			s[j] = tolower(s[j]);
			occ[s[j]]++;
		}

				
		bool flag = true;
		for(pair<char, size_t> curr : occ){
			if(curr.second > 2){
				flag = false;
				break;
			}
		}
		ans += flag;
		
		//if(count_if(occ.begin(), occ.end(), comp) == 0)
		//	ans++;
    }

    cout<<ans<<endl;
    return 0;
}

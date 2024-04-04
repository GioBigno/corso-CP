#include <iostream>
#include <vector>

using namespace std;

int main(){

	size_t N, tot;
	cin>>N>>tot;

	vector<size_t> coins(N);

	for(size_t i=0; i<N; i++){
		cin>>coins[i];
	}

	vector<int> amount(tot+1, -1);

	for(size_t i=0; i<=tot; i++){

		for(size_t j=0; j<N; j++){

			size_t c = coins[j];
			
			if(c > i){
				continue;
			}

			if(c==i){
				amount[i] = 1;
				break;
			}else if(amount[i-c] != -1){

				if(amount[i] == -1){
					amount[i] = amount[i-c] + 1; 
				}else{
					amount[i] = min(amount[i], amount[i-c] + 1);
				}
			}
		}
	}

	cout<<amount[tot]<<endl;

	return 0;
}

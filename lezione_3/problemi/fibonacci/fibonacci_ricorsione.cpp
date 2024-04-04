#include <iostream>

using namespace std;

int64_t f(int x){

	if(x == 0 || x == 1)
		return x;

	return f(x-1) + f(x-2);
}

int main(){

	int x;
	cin>>x;

	cout<<f(x)<<endl;

	return 0;
}

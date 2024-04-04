#include <iostream>
#include <vector>

using namespace std;

int64_t f(int x){

	vector<int64_t> fib(x);
	fib[0] = 0;
	fib[1] = 1;

	for(size_t i=2; i<=x; i++)
		fib[i] = fib[i-1] + fib[i-2];

	return fib[x];
}

int main(){

	int x;
	cin>>x;

	cout<<f(x)<<endl;

	return 0;
}

#include <vector>
#include <algorithm>

using namespace std;

int tempo_massimo(int N, int a[], int b[]){
    vector<int> sol(N);

    sol[0] = max(a[0], b[0]);
    sol[1] = max(b[1], sol[0]+a[1]);

    for(int i=2; i<N; i++){
		sol[i] = max(sol[i-1]+a[i], sol[i-2]+b[i]);
    }

    return sol[N-1];
}

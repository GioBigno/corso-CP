#include <stdio.h>
#include <assert.h>
#include <vector>

#define MAXN 10000
#define MAXM 100000

using namespace std;

int ans=0;
bool visto[MAXN];
int monete[MAXN];
vector <vector <int>> adj;

void dfs(int nodo){

    visto[nodo] = true;
    ans += monete[nodo];

    for(int i=0; i<adj[nodo].size(); i++)
        if(visto[adj[nodo][i]] == false)
            dfs(adj[nodo][i]);

}

int main() {
    FILE *fr, *fw;
    int N, M, A, B, i;

    fr = fopen("input.txt", "r");
    fw = fopen("output.txt", "w");
    assert(2 == fscanf(fr, "%d%d", &N, &M));
    adj.resize(N);
    for(i=0; i<N; i++)
        assert(1 == fscanf(fr, "%d", &monete[i]));
    for(i=0; i<M; i++){
        assert(2 == fscanf(fr, "%d%d", &A, &B));
        adj[A].push_back(B);
        adj[B].push_back(A);
    }

    dfs(0);

    fprintf(fw, "%d\n", ans);
    fclose(fr);
    fclose(fw);
    return 0;
}

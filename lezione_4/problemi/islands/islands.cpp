#include <iostream>

using namespace std;

#define LIMIT 1000

int R, C;
bool flag;
int M[LIMIT][LIMIT];
int visto[LIMIT][LIMIT];

void espandi(int i, int j){

    if(i < 0 || i >= R || j < 0 || j >= C){
        flag = false;
        return;
    }

    if(M[i][j] == 0) return;

    if(visto[i][j]){
        return;
    }

    visto[i][j] = 1;

    espandi(i+1, j);
    espandi(i, j+1);
    espandi(i-1, j);
    espandi(i, j-1);

}

int main() {

    int ans=0; 

    cin>>R>>C;
    for(int i=0; i<R; i++)
        for(int j=0; j<C; j++)
            cin>>M[i][j];

    
    for(int i=0; i<R; i++){
        for(int j=0; j<C; j++){

            flag = false;
            
            if(M[i][j] == 1 && visto[i][j] == 0){
                flag = true;
                espandi(i, j);
            }
            
            if(flag)
                ans++;
        }
    }
    
    cout<<ans<<endl;
    return 0;
}

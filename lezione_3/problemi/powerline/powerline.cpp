#include <iostream>
#include <vector>
using namespace std;

int main(){

    int N;
    cin>>N;

    vector <int> v(N);

    for(int& i:v)
        cin>>i;
   
    int sequenzaMax = 0;
    int indiceMax = N-1;
    int i=N-2;
    while(i>=0){

        if(v[i] < v[indiceMax]){
            if(indiceMax - i > sequenzaMax)
                sequenzaMax = indiceMax - i;
        }else
            indiceMax = i;

        i--;
    }

    cout<<sequenzaMax;
}

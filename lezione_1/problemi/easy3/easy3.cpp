#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

    ifstream in("input.txt");
    ofstream out("output.txt");

    int N;
    in>>N;

    vector<int> arr(N);

    int maxD1 = 0, maxD2 = 0;
    int maxP1 = 0, maxP2 = 0;

    if(N < 2){
        out<<-1;
        return 0;
    }

    for(int i=0; i<N; i++){
        in>>arr[i];

        if(N < 3 && i == 1){
            if(((arr[0] % 2) == 0) && ((arr[1] % 2) == 1)){
                out<<-1;
                return 0;
            }else if(((arr[0] % 2) == 1) && ((arr[1] % 2) == 0)){
                out<<-1;
                return 0;
            }
        }
        
        if(arr[i] % 2 == 0){
            if(arr[i] > maxP1){
                maxP2 = maxP1;
                maxP1 = arr[i];
            }
            else if(arr[i] > maxP2){
                maxP2 = arr[i];
            }
        }
        else{
            if(arr[i] > maxD1){
                maxD2 = maxD1;
                maxD1 = arr[i];
            }
            else if(arr[i] > maxD2){
                maxD2 = arr[i];
            }
        }
    }

    int somma1 = maxP1 + maxP2;
    int somma2 = maxD1 + maxD2;

    if(somma1 > somma2) out<<somma1;
    else    out<<somma2;

    in.close();
    out.close();
    return 0;
}

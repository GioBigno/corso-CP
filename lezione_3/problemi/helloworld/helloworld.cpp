#include <fstream>
#include <vector>

using namespace std;

int main(){

    ifstream in("input.txt");
    ofstream out("output.txt");
        
    string w;
    in>>w;

    int64_t count=0;
	vector<int64_t> v(w.size());

    for (size_t i = 0; i < w.size() ; i++){
        if(i<4)
			v[i] = 0;
        else if(w.substr(i-4,5)=="hello")
        	v[i] = 1 + v[i-1];
        else
			v[i] = v[i-1];
    }
    
    for (size_t i = 4; i < w.size() ; i++){
        if (w.substr(i-4,5)=="world")
        	count = count + v[i];
    }
    
    out<<count;
}

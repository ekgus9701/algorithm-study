#include <iostream>
#include <string>
#include <vector>
using namespace std;
int N;

vector<int> func(string P){
    
    vector<int> V(P.length(), 0);
    int j = 0;
    for(int i = 1; i<P.length(); i++){
        while(j>0 && P[i]!=P[j]){
            j = V[j-1];
        }
        if(P[i] == P[j]){
            V[i] = ++j;
        }
    }
    return V;
}

int KMP(string S, string P){
    vector<int> V = func(P);
    int j = 0;
    
    for(int i = 0; i<S.length(); i++){      
        while(j>0 && S[i] != P[j]){
            j = V[j-1];
        }
        if(S[i] == P[j]){
            if(j== P.length()-1) 
                return 1;      
            else j+=1;
        }
    }
    return 0;
    
}

int main(){
    
    string S, P;
    cin >> S >> P;
 
    N = (int)S.length();
    
    cout << KMP(S, P);

    return 0;
}
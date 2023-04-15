#include<iostream>
#include<string>

using namespace std;
bool prime(int n){
    if(n<2){
        return false;
    }
    
    else{
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
}

bool palin(int n){
    string str;
    str=to_string(n);
    for (int i = 0; i < str.size(); i++) {
            if (str[i] != str[str.size()-1-i]) {
                return false;
            }
        }
     
        return true;
    
}

int main(){
    int n;
    cin>>n;
    while(1){
        if(prime(n)&&palin(n)){
            cout<<n;
            break;
        }
        else{
            n++;
        }
    }
    
}

#include <iostream>

using namespace std;

int main(){
    string s;
    cin>>s;
    
    for(int i=0;i<s.length();i++){
        if(s[i]!='_'){
            s[i]=toupper(s[i]);
        }
        cout<<s[i];
    }
    
    
    
}

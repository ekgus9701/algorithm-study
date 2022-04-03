#include<iostream>

using namespace std;

int main(){
    string s;
    getline(cin,s);
    if(s.empty()){
        cout<<0;
        return 0;
    }
    if(s==" "){
        cout<<0;
        return 0;
    }
    int ans=1;

    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
            ans++;
            if(i==0||i==s.length()-1){
                ans--;
            }
        }
       
    }
    cout<<ans;
}
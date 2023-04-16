
#include <iostream>
#include<string>
#include<algorithm>

using namespace std;

int min_def(int a,int b){
    if(a<=b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    string s;
    int zero=0;
    int one=0;
    
    getline(cin,s);
    s.erase(remove(s.begin(), s.end(), ' '), s.end());

    
    if(s.length()==1){
        cout<<0;
        return 0;
    }
    for(int i=0;i<s.length();i++){
        if(s[i]!=s[i+1]){
            if(s[i]=='0') zero++;
            else one++;
            //cout<<s[i]<<endl;
        }
     
    }

        cout<<min_def(zero, one);
    
    
}

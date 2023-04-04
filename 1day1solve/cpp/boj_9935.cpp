#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(NULL);
    cin.tie(0); cout.tie(0);
    vector<char> v;
    string s1,s2;
    
    cin>>s1>>s2;
    
    for(int i=0;i<s1.length();i++){
        v.push_back(s1[i]);
        
        if(v.size()>=s2.length()){
            bool check=true;
            for(int j=0;j<s2.length();j++){
                
                if(s2[j]!=v[v.size()-s2.length()+j]){
                    check=false;
                    break;
                }
                
                
            }
            if(check){
                for(int o=0;o<s2.size();o++){
                    v.pop_back();
                }
            }
        }
    }
    
    if(v.empty()){
        cout<<"FRULA"<<"\n";
    }
    else{
        for(int p=0;p<v.size();p++){
            cout<<v[p];
        }
    }
    
}

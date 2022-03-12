#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    string s;
    vector<string> v;
    cin>>s;
    int k=s.length();
    
    
    for(int i=0;i<k;i++){
        v.push_back(s);
        s.erase(0,1);
        
    }

    sort(v.begin(), v.end());

    for(int i=0;i<k;i++){
        cout<<v[i]<<"\n";
        
    }
    


}
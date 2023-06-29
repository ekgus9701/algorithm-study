#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int n,m,a;
    bool check;
    vector<int> v1;
    vector<int> v2;
    
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        v1.push_back(a);
    }
    
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>a;
        v2.push_back(a);
    }
    
    sort(v1.begin(),v1.end());
    
    for(int i=0;i<m;i++){
        check=binary_search(v1.begin(),v1.end(),v2[i]);
        //cout<<v1[i]<<" ";
        if(check==true){
            cout<<1<<" ";
        }
        else{
            cout<<0<<" ";
        }
    }
}

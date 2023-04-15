#include<iostream>
#include<vector>

using namespace std;

int n,s,ans=0,sum=0;
vector<int> v;

void solve(int index){
    if(index==n){
        return;
    }
    if(sum+v[index]==s){
        ans++;
    }
    solve(index+1);
    sum+=v[index];
    solve(index+1);
    sum-=v[index];
    
}

int main(){
    
    int t;
    
    cin>>n>>s;
    for(int i=0;i<n;i++){
        
        cin>>t;
        v.push_back(t);
        
    }
    solve(0);
    cout<<ans;
    
}

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main(){
    ios::sync_with_stdio(NULL);
    cin.tie(0); cout.tie(0);
    int t,r;
    int ans=0;
    int n;
    vector<int> v;
    
    cin>>t;
    for(int i=0;i<t;i++){
        ans=0;
        cin>>n;
        for(int j=0;j<n;j++){
            cin>>r;
            v.push_back(r);
        }
        sort(v.begin(),v.end());
        for(int k=0;k<n-2;k++){
            if(v[k+2]-v[k]>ans){
                ans=v[k+2]-v[k];
            }
        }
        cout<<ans<<"\n";
        v.clear();
        
    }
    
}

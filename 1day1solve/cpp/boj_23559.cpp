#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int i=0;
  int A[100001],B[100001];
    int n,x,ans=0;
    vector<pair<int,int>> c;
    cin>>n>>x;
    
    for(int i=0;i<n;i++){
        cin>>A[i]>>B[i];
        c.push_back(make_pair(A[i]-B[i],i));
        ans+=B[i];
        x-=1000;
    }
    //cout<<ans<<"\n";
    sort(c.begin(),c.end(),greater<>());

    for(int i=0;i<n;i++){
        cout<<x<<" "<<c[i].first<<"\n";
        if(c[i].first>0){
            if(x>=4000){
                x-=4000;
                ans-=B[c[i].second];
                ans+=A[c[i].second];
               // cout<<ans<<"\n";
            }
        }
        
    }
   
    cout<<ans;
    return 0; 
}


    


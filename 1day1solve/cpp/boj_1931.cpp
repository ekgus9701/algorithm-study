#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n,a,b,max;
    vector<pair<int,int>> v;
    cin>>n;

    for(int i=0;i<n;i++){
      cin>>a>>b;
        v.push_back(pair<int,int>(b,a));
        
    }

    sort(v.begin(),v.end());
    
   

    max=v[0].first;
    int ans=1;

    for(int i=1;i<n;i++){
        if(max<= v[i].second){
            max=v[i].first;
            ans++;
            
        }
    }

    cout<<ans;

}
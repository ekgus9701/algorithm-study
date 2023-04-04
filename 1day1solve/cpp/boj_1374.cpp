
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(NULL);
    cin.tie(0); cout.tie(0);
    int n,ans=0;
    int a,b,c;
    vector <pair<int,int>> v;

    cin>>n;
    for(int i=0;i<n;i++){
       
        cin>>a>>b>>c;
        v.push_back(pair<int,int>(b,c));
        
    }
    sort(v.begin(),v.end());

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(v[i].second<=v[j].first){
                v[j].first=v[i].first;
                v[i].first=-1;
                break;
            }
        }
    }
  
    for(int k=0;k<n;k++){
        if(v[k].first!=-1){
            ans++;
        }
    }
    cout<<ans;
    
}

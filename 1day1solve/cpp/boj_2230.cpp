#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>

using namespace std;

int main(){
    int n,m;
    vector<int> v;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }

    sort(v.begin(),v.end());
    int en=0;
    int ans=INT_MAX;
    for(int st=0;st<n;st++){
        while(en<n&&v[en]-v[st]<m) en++;
        if(en==n) break;
        ans=min(v[en]-v[st],ans);
    }

    cout<<ans;
 
}
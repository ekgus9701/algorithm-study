#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;
    int num;
    vector<int> v;
    vector<int> v2;

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num;
        v.push_back(num);
    }
    

    for(int l=0;l<n;l++){
        cin>>num;
        v2.push_back(num);
    }

    sort(v.begin(),v.end());
    sort(v2.begin(),v2.end());
    int ans=0;

    for(int i=0;i<n;i++){
        ans+=v[i]*v2[n-1-i];
    }

    cout<<ans;
}
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    
    vector<int> v1;
    vector<int> v2;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v1.push_back(a);
    }
    sort(v1.begin(),v1.end());
    cin>>m;
    for(int i=0;i<m;i++){
        int a;
        cin>>a;
        cout<<binary_search(v1.begin(), v1.end(), a)<<"\n";
    }

    
}

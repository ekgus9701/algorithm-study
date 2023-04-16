#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n,k,a,ans=0,temp;
    vector<int> height;
    vector<int> minus;
    
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a;
        height.push_back(a);
    }
    
    for(int j=0;j<n-1;j++){
        temp=height[j+1]-height[j];
        minus.push_back(temp);
    }
    
    sort(minus.begin(),minus.end());
    
    for(int q=0;q<n-k;q++){
        ans+=minus[q];
    }
    
    cout<<ans;
}

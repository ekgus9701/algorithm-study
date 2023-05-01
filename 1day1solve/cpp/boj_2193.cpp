#include<iostream>

using namespace std;

int main(){
    int n;
    long long ans[91];
    cin>>n;
    
    ans[0]=1;
    ans[1]=1;
    for(int i=2;i<n;i++){
        ans[i]=ans[i-1]+ans[i-2];
    }
    
    cout<<ans[n-1];
}

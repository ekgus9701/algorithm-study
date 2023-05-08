#include<iostream>

using namespace std;

int max_func(int a,int b){
    if(a>b) return a;
    else return b;
}
int main(){
    int n,a,max=0;
    int dp[210],arr[210];
    
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        arr[i]=a;
    }
    
    for(int i=0;i<n;i++){
        dp[i]=1;
        for(int j=0;j<i;j++){
            if(arr[i]>arr[j]){
                dp[i]=max_func(dp[i], dp[j]+1);
            }
            
            //cout<<i<<" "<<j<<" "<<dp[i]<<endl;
        }
    }
    
    for(int l=0;l<n;l++){
        max=max_func(max, dp[l]);
    }
    
    cout<<n-max;
}

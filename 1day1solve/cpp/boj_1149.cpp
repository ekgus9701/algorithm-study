#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n;
    int R[1000];
    int G[1000];
    int B[1000];
    int dp[1003][3];
    //dp[i][j]가 뜻하는 것은
    //i번째 집을 j번째 색으로 칠했을때 지금까지의 최솟값
    
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>R[i]>>G[i]>>B[i];
    }
    
    dp[0][0]=R[0]; //0번째 집을 0번쩨 색(빨간색)으로 칠했을 때 지금까지의 최솟값
    dp[0][1]=G[0];
    dp[0][2]=B[0];
    
    for(int i=1;i<n;i++){
        dp[i][0]=min(dp[i-1][1],dp[i-1][2])+R[i];
        dp[i][1]=min(dp[i-1][0],dp[i-1][2])+G[i];
        dp[i][2]=min(dp[i-1][1],dp[i-1][0])+B[i];
    }
    
    cout<<min(min(dp[n-1][0],dp[n-1][1]),dp[n-1][2]);
    
    
}

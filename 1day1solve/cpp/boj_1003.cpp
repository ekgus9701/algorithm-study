#include<iostream>

using namespace std;

int dp[41][2];

int main(){
    int n;
    cin>>n;
    int tk[n];
    dp[0][0]=1;
    dp[0][1]=0;
    dp[1][0]=0;
    dp[1][1]=1;


    for(int e=0;e<n;e++){
        cin>>tk[e];
        
         for(int i=2;i<=tk[e];i++){
            for(int j=0;j<2;j++){
                dp[i][j]=dp[i-1][j]+dp[i-2][j];
                //cout<<i<<" "<<dp[i][j]<<endl;
            }
        }
    }

   

   

    for(int i=0;i<n;i++){
        cout<<dp[tk[i]][0]<<" "<<dp[tk[i]][1]<<"\n";
    }



}
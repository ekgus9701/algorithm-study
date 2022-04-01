#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;
int dp[201][201];
string a,b,c;
int func(int n,int m){
    if(n+m==c.size()){
        return 1;
    }
    int& ret= dp[n][m];
    if(ret!=-1) return ret;
    if(n<a.size() && c[n+m]==a[n] && func(n+1,m)) 
        return ret=1;
    if(m<b.size() && c[n+m]==b[m] && func(n,m+1)) 
        return ret=1;
    return ret=0;
}

int main(){
    cin.tie(0);cout.tie(0);
    ios::sync_with_stdio(0);

    int q;
    cin>>q;

    for(int i=1;i<=q;i++){
        cin>>a>>b>>c;
        memset(dp,-1,sizeof(dp));
        string ret = func(0,0) ? "yes":"no";
        cout << "Data set " << i << ": " << ret << '\n';
    }


}




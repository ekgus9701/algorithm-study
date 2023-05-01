#include<iostream>

using namespace std;

int max_func(int a,int b){
    if(a>=b){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    int n,m,a;
    int arr[1010][1010];
    int ans[1010][1010];

    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a;
            arr[i][j]=a;
        }
    }
    ans[0][0]=arr[0][0];

    for(int i=1;i<n;i++){
        ans[i][0]=arr[i][0]+ans[i-1][0];
        
    }
    for(int i=1;i<m;i++){
        ans[0][i]=arr[0][i]+ans[0][i-1];
    }

    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            ans[i][j]=max_func((ans[i-1][j]+arr[i][j]),(ans[i][j-1]+arr[i][j]));
        }
    }
    

    cout<<ans[n-1][m-1];

}

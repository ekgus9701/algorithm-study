#include<iostream>
#include<vector>

using namespace std;

int max_func(int a,int b){
    if(a>=b) {
        return a;
    }
    else{
        return b;
    }
}
int main(){
    
    int t,a;
    int arr[310],ans[310];
    
    
    cin>>t;
    
    for(int i=0;i<t;i++){
        cin>>a;
        arr[i]=a;
    }
    ans[0]=arr[0];
    ans[1]=arr[0]+arr[1];
    ans[2]=max_func(arr[0]+arr[2],arr[1]+arr[2]);
    
    for(int i=3;i<t;i++){
        ans[i]=max_func(ans[i-2]+arr[i],ans[i-3]+arr[i]+arr[i-1]);
    }
    
    cout<<ans[t-1];
    
    
}

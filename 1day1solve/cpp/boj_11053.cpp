#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n;
    int a[1001],ans[1001];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    
    int Max=0;
    for(int i=0;i<n;i++){
        ans[i]=1;
        for(int j=0;j<i;j++){
            if(a[j]<a[i]&&ans[j]>=ans[i])
                ans[i]=ans[j]+1;
        }
    }
    

    for(int i=0;i<n;i++){
        Max=max(Max,ans[i]);
    }
    cout<<Max;

}
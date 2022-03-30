#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[1001];
    long long d[1001];
    long long Max=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    d[0]=a[0];
    Max=d[0];
 
    
    for(int i=1;i<n;i++){
       d[i]=a[i];
       for(int j=0;j<i;j++){
           if(a[i]>a[j]){
               d[i]=d[j]+a[i];
           }
       }
    }
    for(int i=1;i<n;i++){
        Max=max(Max,d[i]);
    }
    cout<<Max;

}
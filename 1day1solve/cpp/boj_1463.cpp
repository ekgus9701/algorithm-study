#include<iostream>
#include<algorithm>
#include <limits.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int arr[1000000];
    arr[1]=0;
    arr[2]=1;
    arr[3]=1;
    int minNum=INT_MAX;
    for(int i=4;i<=n;i++){
        minNum=INT_MAX;
        if(i%3==0){
            minNum=min(minNum,arr[i/3]+1);
            
        }
        
        if(i%2==0){
            minNum=min(minNum,arr[i/2]+1);
        }
        
        minNum=min(minNum,arr[i-1]+1);
        
        arr[i]=minNum;
    }
    
    cout<<arr[n];
    
    
}

#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    
    int arr[12];
    arr[1]=1;
    arr[2]=2;
    arr[3]=4;
    for(int j=4;j<12;j++){
        arr[j]=arr[j-1]+arr[j-2]+arr[j-3];
        
    }
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        cout<<arr[n]<<endl;
     
    }
}

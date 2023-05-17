#include<iostream>

using namespace std;
int arr[1000010]={0};
int main(){
    int t,a,n;
    long long count=0;
    long long max=-1;
    
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        for(int j=0;j<n;j++){
            cin>>a;
            arr[j]=a;
            
        }
        max=arr[n-1];
        for(int j=n-2;j>=0;j--){
            if(max>arr[j]){
                count=count+max-arr[j];
            }
            else{
                max=arr[j];
            }
        }
        
        cout<<"#"<<i+1<<" "<<count<<"\n";
        count=0;
        for(int j=0;j<n;j++){
            arr[j]=0;
        }
    }
    
}

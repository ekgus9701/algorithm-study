#include<iostream>

using namespace std;

int main(){
    int n,t;
    int arr[11][11]={0,};
    arr[0][0]=1;
    
    cin>>t;
    
    for(int i=0;i<t;i++){
        
        cin>>n;
        cout<<"#"<<i+1<<"\n";
        cout<<arr[0][0]<<"\n";
        for(int j=1;j<n;j++){
            for(int k=0;k<=j;k++){
                
                if(k==0||k==j){
                    arr[j][k]=1;
                    cout<<arr[j][k]<<" ";
                }
                else{
                   
                    arr[j][k]=arr[j-1][k-1]+arr[j-1][k];
                    cout<<arr[j][k]<<" ";
                }
                
            }
            cout<<"\n";
        }
        
        
        
    }
}

#include<iostream>

using namespace std;

int arr[1000000];
int main(){
    int t,n;
    int max_v=0;
    long long ans=0;

    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
   

    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
       max_v=0;
        ans=0;
        for(int j=0;j<n;j++){
            cin>>arr[j];
            
            
        }

        for(int j=n-1;j>=0;j--){
            max_v=max(max_v,arr[j]);
            if(max_v<=arr[j]){
                max_v=arr[j];
                continue;
            }

            else{
                ans+=max_v-arr[j];

            }
        }
        cout<<ans<<"\n";

        
    }
}
       
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    int n,m,p,sum=0,ans=0;
    
    cin>>n>>m;
    vector<int> v;
    for(int i=0;i<n;i++){
        cin>>p;
        v.push_back(p);
    }

    if(v[v.size()-1]==m){
        ans++;
    }

    for(int i=0;i<n-1;i++){
      
        sum+=v[i];
        
        for(int j=i+1;j<n;j++){
            
           if(sum==m){
               ans++;
               sum=0;
               break;
           }
           
            sum+=v[j];
            
            if(sum==m){
                ans++;
                sum=0;
                break;
            }
            else if(sum>m){
                sum=0;
                break;
            }

            if(j==n-1){
                cout<<ans;
                return 0;
            
            }
           
        }
        
    }
    
    cout<<ans;

}
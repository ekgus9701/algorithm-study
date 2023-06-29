#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,m,a,ans=0;
    bool check;
    
    while(true){
        
        vector<int> v1;
        vector<int> v2;
        cin>>n>>m;
        if(n==0&&m==0){
            break;
        }
        for(int i=0;i<n;i++){
            cin>>a;
            v1.push_back(a);
        }
        
        
        for(int i=0;i<m;i++){
            cin>>a;
            v2.push_back(a);
        }
        
        sort(v1.begin(),v1.end());
        
        for(int i=0;i<m;i++){
            check=binary_search(v1.begin(),v1.end(),v2[i]);
            //cout<<v1[i]<<" ";
            if(check==true){
                ans++;
            }
        }
           
        cout<<ans<<endl;
        ans=0;
    }
   
        
    
}

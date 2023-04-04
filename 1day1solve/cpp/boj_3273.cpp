
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,r,x,ans=0;
    int p1=0;
    int p2;
    vector <int> v;
    cin>>n;
    p2=n-1;
    for(int i=0;i<n;i++){
        cin>>r;
        v.push_back(r);
    }
    sort(v.begin(),v.end());
    
    cin>>x;
    while(true){
        if(p1>=p2 ) break;
        if(v[p1]+v[p2]==x){
            ans++;p1++;p2--;
            continue;
        }
        else if(v[p1]+v[p2]>x){
            p2--;
            continue;
        }
        else{
            p1++;
            continue;
        }
    }
    
    cout<<ans;
}

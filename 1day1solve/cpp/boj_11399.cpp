#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int n,a,num=0,ans=0;
    vector<int> p;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>a;
        p.push_back(a);
    }

    sort(p.begin(),p.end());

   for(int i=0;i<n;i++){
       for(int j=0;j<=i;j++){
           ans+=p[j];
       }
       
   }

    cout<<ans;


}
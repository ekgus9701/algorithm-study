#include<iostream>
#include<vector>

using namespace std;


int main(){
   long long n,p;
   cin>>n;
   vector<long long> v;
   vector<long long> v1;
    
   for(int i=0;i<n;i++){
       cin>>p;
       v.push_back(p);
   }

   for(int i=0;i<n-1;i++){
       cin>>p;
       v1.push_back(p);
   }
    if(n==1){
        cout<<"권병장님, 중대장님이 찾으십니다";   
        return 0;
    }
   long long maxD=0;

   for(int i=0;i<n-1;i++){
       if(maxD<=v[i]+v1[i]){
           maxD=v[i]+v1[i];
       }
       //cout<<maxD<<v[i+1];
       if(maxD>=v[i+1]){
           continue;}
           
       else{
           cout<<"엄마 나 전역 늦어질 것 같아";
           return 0;
       }

   }
    cout<<"권병장님, 중대장님이 찾으십니다";    
}
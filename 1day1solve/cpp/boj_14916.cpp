#include<iostream>

using namespace std;

int main(){
    long long n,ans=0;
    cin>>n;
    
    
    if(n==1||n==3){
        cout<<-1;
        return 0;
    }

    while(true){
        if(n%5==0){
            ans+=n/5;
            break;
        }
        n-=2;
        ans++;
    }
    
    cout<<ans;
   
}

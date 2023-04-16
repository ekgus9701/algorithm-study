#include <iostream>

using namespace std;

int main(){
    long long s,sum=0,ans=0;
    
    cin>>s;
    
    for(long long i=1;sum<s;i++){
        if(sum+i<=s){
            sum+=i;
            ans++;
        }
        else{
            break;
        }
    }
    cout<<ans;
    
}

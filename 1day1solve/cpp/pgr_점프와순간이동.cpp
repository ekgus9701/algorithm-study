#include <iostream>
using namespace std;

int solution(int n)
{
    int ans = 0;
    
    while(true){
        if(n==1){
            break;
        }
        if(n%2!=0){
            n-=1;ans++;
        }
        n/=2;
        
    }

    return ans;
}

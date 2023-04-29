#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
    
    int N,sum=0;
    
    cin>>N;
    while(true){
        
        sum+=N%10;
        if(N<10){
            break;
        }
        N/=10;
       
    }
    cout<<sum;
   
    
    return 0;//정상종료시 반드시 0을 리턴해야합니다.
}

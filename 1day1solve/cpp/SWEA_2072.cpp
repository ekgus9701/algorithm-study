
#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
    int test_case;
    int T,a,sum=0;
    
    cin>>T;
    /*
       여러 개의 테스트 케이스가 주어지므로, 각각을 처리합니다.
    */
    for(test_case = 1; test_case <= T; ++test_case)
    {

        for(int i=0;i<10;i++){
            cin>>a;
            if(a%2!=0){
                sum+=a;
            }
            
        }
        
        cout<<"#"<<test_case<<" "<<sum<<"\n";

        sum=0;
    }
    return 0;//정상종료시 반드시 0을 리턴해야합니다.
}

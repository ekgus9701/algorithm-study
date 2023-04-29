#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char** argv)
{
    int test_case;
    int T,max=0,a;
   
    cin>>T;
   
    for(test_case = 1; test_case <= T; ++test_case)
    {
        for(int i=0;i<10;i++){
            cin>>a;
            if(a>=max){
                max=a;
            }
        }
        cout<<"#"<<test_case<<" "<<max<<"\n";
        max=0;

    }
    return 0;//정상종료시 반드시 0을 리턴해야합니다.
}

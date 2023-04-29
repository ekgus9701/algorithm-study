#include <iostream>
#include <algorithm>
#include<cmath>

using namespace std;

int main(int argc, char** argv)
{
    int test_case;
    int T,a;
    double sum=0;
   
    cin>>T;
   
    for(test_case = 1; test_case <= T; ++test_case)
    {

        for(int i=0;i<10;i++){
            cin>>a;
            sum+=a;
        }
        cout<<"#"<<test_case<<" "<<round(sum/10)<<"\n";
        sum=0;

    }
    return 0;//정상종료시 반드시 0을 리턴해야합니다.
}

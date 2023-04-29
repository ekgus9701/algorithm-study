#include <iostream>
#include <algorithm>
#include<vector>

using namespace std;

int main(int argc, char** argv)
{
    int test_case;
    int T,a,a2;
    vector<int> v;
   
    cin>>T;
   
    for(test_case = 1; test_case <= T; ++test_case)
    {
        
        cin>>a;
        v.push_back(a);

    }
    sort(v.begin(),v.end());
    a2=T/2;
    cout<<v[a2];
    
    return 0;//정상종료시 반드시 0을 리턴해야합니다.
}

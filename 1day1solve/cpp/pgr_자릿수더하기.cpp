#include <iostream>

using namespace std;
int solution(int n)
{
    int answer = 0;
int sum=0;
    while(true){
        if(n<1){
            break;
        }
       sum+=n%10;
        n/=10;
    }

    return sum;
}

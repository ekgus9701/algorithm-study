#include <iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

int main(){
    long long n;
    cin>>n;
    long long num;
    num=sqrt(n);
    if(num*num<n){
        num++;
    }
    cout<<num;
  

}

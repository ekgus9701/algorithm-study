#include<iostream>

using namespace std;

int n;

int main(){
    int sum=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    cout<<sum;
}

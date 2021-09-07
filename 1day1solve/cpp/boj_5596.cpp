#include<iostream>

using namespace std;

int main(){
    int mk[4], ms[4];
    int sum1=0, sum2=0;
    for (int i = 0; i < 4;i++){
        cin >> mk[i];
        sum1 += mk[i];
    }
    for (int i = 0; i < 4;i++){
        cin >> ms[i];
        sum2 += ms[i]; 
    }

    if(sum1<sum2){
        cout << sum2;
    }
    else if(sum1==sum2)
        cout << sum1;
    else{
        cout << sum1;
    }
}
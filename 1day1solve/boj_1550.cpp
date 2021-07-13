#include<iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    char num[7];
    cin >> num;
    int nDec = (int)strtol(num, NULL, 16);

   
    cout << nDec << endl;
}
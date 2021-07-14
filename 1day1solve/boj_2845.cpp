#include<iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int l, p,k;
    int num[5];

    cin >> l>>p;
    k = l * p;
    for (int i = 0; i < 5;i++){
        cin >> num[i];
        cout << num[i] - k << " ";}
    }

  
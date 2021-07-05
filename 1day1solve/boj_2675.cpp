#include<iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t, r;
    string str;
    cin >> t;
    for (int i = 0; i < t;i++){
        cin >> r >> str;
        for (int k = 0; k < str.length();k++){
            for (int j = 0; j < r;j++){
                cout << str[k];
            }
        }
        cout << "\n";
    }
}
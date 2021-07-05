#include<iostream>
#include<string.h>

using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    char ch[101]={0};
    cin >> s;

    int alph[26];
    for (int i = 0; i < 26;i++){
        alph[i] = -1;
    }

    strcpy(ch, s.c_str());

    for (int j = 97; j <= 122;j++){
        for (int k = 0; k <101 ;k++){
            if (ch[k] == (char)j){
                if(alph[j - 97]==-1)
                    alph[j - 97] = k;
                continue;
            }
           
         }
    }

    for (int i = 0; i < 26;i++){
        cout << alph[i] << " ";
    }
}
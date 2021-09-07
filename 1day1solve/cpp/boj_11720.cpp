#include<iostream>
#include<string>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    int n,num,sum=0;
    
    string str;
    cin >> n;
    cin >> str;
    
    for (int i = 0; i < n;i++){
        
        num = stoi(str.substr(i, 1));
        sum += num;
    }
    cout << sum;
}
#include<iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    long ans,ans1;

    cin >> n;
    ans = 0.78 * n;
    ans1 = 0.8 * n + 0.2 * 0.78 * n;
    cout <<ans << " ";
    cout <<ans1;
}
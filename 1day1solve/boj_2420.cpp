#include<iostream>
#include<math.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long n, m;

    cin >> n >> m;

    cout << abs(n - m);
}
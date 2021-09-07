#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int a, b;
    cin >> a >> b;

    if (a > 0 && b > 0)
        cout << 1;
    if (a < 0 && b > 0)
        cout << 2;
    if (a < 0 && b < 0)
        cout << 3;
    if (a > 0 && b < 0)
        cout << 4;
}
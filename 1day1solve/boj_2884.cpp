#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int a, b;

    cin >> a >> b;

    if (b >= 45)
        cout << a << " " << b - 45;
    else if (a == 0)
        cout << 23 << " " << b + 60 - 45;
    else
        cout << a - 1 << " " << b + 60 - 45;
}
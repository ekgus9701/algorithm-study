#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, x;
    cin >> n >> x;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] < x)
        {
            cout << a[i] << " ";
        }
    }
}
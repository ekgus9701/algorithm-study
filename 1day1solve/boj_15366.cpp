#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    int x[100] = {1000};
    int y[100] = {1000};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> y[i];
    }
    sort(x, x + n);
    sort(y, y + n);

    for (int i = 0; i < n; i++)
    {
        if (x[i] > y[i])
        {
            cout << "NE";
            break;
        }
        else if (i == n - 1)
            cout << "DA";
    }
}
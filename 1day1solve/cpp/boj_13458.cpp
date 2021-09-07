#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, b, c, count = 0;
    vector<int> a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> b >> c;
    if (b > c)
    {
        for (int i = 0; i < n; i++)
        {
            a[i] -= b;
            count += 1;
            count += a[i] / c;
            if (a[i] % c > 0)
            {
                count += 1;
            }
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            count += a[i] / c;
            if (a[i] % c > 0)
            {
                count += 1;
            }
        }
    }
    cout << count;
}
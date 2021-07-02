#include <iostream>

using namespace std;

bool func(int i)
{
    int a, b, c;

    a = i / 100;
    b = (i % 100) / 10;
    c = i % 10;
    if (a - b == b - c)
        return true;

    else
    {
        return false;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, sum = 0;
    cin >> n;

    bool num[1001] = {false};
    for (int i = 1; i < 100; i++)
    {
        num[i] = true;
    }

    for (int i = 100; i < 1001; i++)
    {
        num[i] = func(i);
    }

    for (int k = 1; k < n + 1; k++)
    {
        if (num[k] == true)
        {
            sum++;
        }
    }
    cout << sum;
}
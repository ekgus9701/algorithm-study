#include <iostream>

using namespace std;

int check(int n)
{
    int result = n;
    while (true)
    {
        if (n == 0)
            break;
        result += n % 10;
        n = n / 10;
    }
    return result;
}
bool num[10001];
int main()
{
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    for (int i = 1; i <= 10000; i++)
    {
        int x = check(i);
        if (x <= 10001)
        {
            num[x] = true;
        }
    }

    for (int i = 1; i <= 10000; i++)
    {
        if (!num[i])
            cout << i << endl;
    }
}
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long a, b, c;
    cin >> a >> b >> c;

    int arr[10] = {0};
    long num = a * b * c;
    while (num > 0)
    {
        arr[num % 10]++;
        num /= 10;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }
}
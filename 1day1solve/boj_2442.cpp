#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int k = 0; k < n; k++)
    {
        for (int i = k; i < n - 1; i++)
        {
            cout << " ";
        }

        for (int j = 0; j < 2 * (k + 1) - 1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    int n;

    cin >> n;
    double arr[n];
    double new_arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max = *max_element(arr, arr + n);

    for (int j = 0; j < n; j++)
    {
        new_arr[j] = arr[j] / max * 100;
    }

    double avr = 0;

    for (int k = 0; k < n; k++)
    {
        avr += new_arr[k];
    }

    avr = avr / n;
    cout << fixed;
    cout.precision(6);
    cout << avr;
}
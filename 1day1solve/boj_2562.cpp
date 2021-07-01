#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int arr[10];
    int max = 0;
    int maxNum = 0;

    for (int i = 0; i < 9; i++)
    {
        cin >> arr[i];
        if (max <= arr[i])
        {
            max = arr[i];
            maxNum = i;
        }
    }
    cout << max << endl;
    cout << maxNum + 1;
}
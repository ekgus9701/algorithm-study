#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> A(1001, -1);
    int n;
    cin >> n;
    A[0] = 1;
    A[1] = 1;

    for (int i = 2; i < 1001; i++)
    {
        int check = 1;
        while (true)
        {
            int k = 1;
            A[i] = check;
            while (true)
            {
                if (i - 2 * k < 0)
                    break;
                if (A[i] - A[i - k] == A[i - k] - A[i - 2 * k])
                    break;
                k++;
            }

            if (i - 2 * k < 0)
                break;
            else
                check++;
        }
    }

    cout << A[n];
}
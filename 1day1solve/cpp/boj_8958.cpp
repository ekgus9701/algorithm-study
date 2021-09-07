#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    int sum = 0;
    int correct = 0;
    cin >> n;

    char ch[80];

    for (int i = 0; i < n; i++)
    {
        cin >> ch;
        for (int j = 0; j < strlen(ch); j++)
        {
            if (ch[j] == 'O')
            {
                correct++;
                sum += correct;
            }
            else
            {
                correct = 0;
            }
        }
        cout << sum << "\n";
        sum = 0;
        correct = 0;
    }
}

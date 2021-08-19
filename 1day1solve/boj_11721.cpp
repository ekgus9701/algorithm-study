#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string a;

    getline(cin, a);
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i];
        if ((i + 1) % 10 == 0)
            cout << "\n";
    }
}
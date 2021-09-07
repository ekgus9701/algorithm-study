#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    while (true)
    {
        getline(cin, s);
        if (cin.eof() == true)
            break;
        cout << s << endl;
    }
}
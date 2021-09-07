#include <iostream>

using namespace std;

int main()
{
    int x, y;
    int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int sum = 0;
    int ans = 0;
    cin >> x >> y;
    for (int i = 0; i < x - 1; i++)
    {
        sum += month[i];
    }
    sum += y;
    sum -= 1;
    ans = sum % 7;

    switch (ans)
    {
    case 0:
        cout << "MON";
        break;
    case 1:
        cout << "TUE";
        break;
    case 2:
        cout << "WED";
        break;
    case 3:
        cout << "THU";
        break;
    case 4:
        cout << "FRI";
        break;
    case 5:
        cout << "SAT";
        break;
    case 6:
        cout << "SUN";
        break;
    }
}
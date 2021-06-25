#include <iostream>

using namespace std;

int main()
{
    int grade;

    cin >> grade;

    if (grade > 89)
        cout << "A";
    else if (grade > 79)
        cout << "B";
    else if (grade > 69)
        cout << "C";
    else if (grade > 59)
        cout << "D";
    else
        cout << "F";
}
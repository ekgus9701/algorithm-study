#include <iostream>

using namespace std;
int main()
{

    double a, b;
    cin >> a >> b;

    cout.precision(12); //전체 12자리를 표현하겠다.
    cout << fixed;      //fixed를 쓰면 소수점 아래 12자리를 표현하겠다는 뜻
    cout << a / b;
    return 0;
}
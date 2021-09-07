#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t, circle = 0, square = 0;
    int s, g;
    int secret[4] = {0}, guess[4] = {0};
    int secret1[4] = {0}, guess1[4] = {0};
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> s >> g;
        secret[0] = s / 1000;
        secret[1] = (s % 1000) / 100;
        secret[2] = s % 1000 % 100 / 10;
        secret[3] = s % 1000 % 100 % 10;
        secret1[0] = s / 1000;
        secret1[1] = (s % 1000) / 100;
        secret1[2] = s % 1000 % 100 / 10;
        secret1[3] = s % 1000 % 100 % 10;
        guess[0] = g / 1000;
        guess[1] = (g % 1000) / 100;
        guess[2] = g % 1000 % 100 / 10;
        guess[3] = g % 1000 % 100 % 10;
        guess1[0] = g / 1000;
        guess1[1] = (g % 1000) / 100;
        guess1[2] = g % 1000 % 100 / 10;
        guess1[3] = g % 1000 % 100 % 10;

        for (int k = 0; k < 4; k++)
        {

            for (int t = 0; t < 4; t++)
            {
                if (secret[k] == guess[t] && k == t)
                {
                    circle++;
                    secret[k] = -1;
                    guess[t] = -2;
                    continue;
                }
            }
        }

        for (int k = 0; k < 4; k++)
        {

            for (int t = 0; t < 4; t++)
            {
                if (secret[k] == guess[t] && k != t)
                {
                    square++;
                    secret[k] = -1;
                    guess[t] = -2;
                    continue;
                }
            }
        }
        cout << "For secret = " << secret1[0] << secret1[1] << secret1[2] << secret1[3] << " and "
             << "guess = " << guess1[0] << guess1[1] << guess1[2] << guess1[3] << ", " << circle << " circles and " << square << " squares will light up.";

        circle = 0,
        square = 0;
        cout << "\n";
    }
}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(int N, vector<vector<long long>> money)
{
    for (int i = 1; i < N; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0)
            {
                money[i][j] += money[i - 1][j];
            }
            else if (i == j)
            {
                money[i][j] += money[i - 1][j - 1];
            }
            else
            {
                money[i][j] += max(money[i - 1][j - 1], money[i - 1][j]);
            }
        }
    }
    long long ans = money[N - 1][0];
    for (int i = 1; i < N; i++)
    {
        ans = max(money[N - 1][i], ans);
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    cin >> N;

    vector<vector<long long>> money;
    for (int i = 0; i < N; i++)
    {
        money.push_back(vector<long long>(i + 1, 0));
        for (int j = 0; j <= i; j++)
        {
            cin >> money[i][j];
        }
    }
    cout << solution(N, money) << "\n";
    return 0;
}
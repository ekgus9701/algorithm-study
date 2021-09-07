#include <iostream>
#include <vector>
using namespace std;

long long solution(int N, vector<vector<long long>> money)
{

    
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
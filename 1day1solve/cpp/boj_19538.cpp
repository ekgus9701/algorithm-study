#include <iostream>
#include <vector>
#include<queue>

using namespace std;

vector<int> solution(int N, vector<vector<int>> adj, int M, vector<int> firstInfected)
{
    queue<int> Q;
    vector<int> answer(N + 1, 0);
    vector<int> (N + 1, -1);
}

int main()
{
    int N;
    cin >> N;
    vector<vector<int>> E(N + 1);
    for (int i = 1; i <= N; i++)
    {
        while (1)
        {
            int t;
            cin >> t;
            E[i].push_back(t);
            if (t == 0)
                break;
        }
    }

    int M;
    cin >> M;
    vector<int> firstInfected(M);
    for (int i = 0; i < M; i++)
    {
        int t;
        cin >> t;
        firstInfected.push_back(t);
    }

    vector<int> ans = solution(N, E, M, firstInfected);
    for (int i = 0; i < N; i++)
        cout << ans[i] << " ";
    cout << "\n";
}
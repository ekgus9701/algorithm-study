#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(int n, vector<vector<int>> adj, int M, vector<int> firstInfected)
{
    vector<int> turns(n + 1, 0);
    vector<int> ans(n + 1, -1);
    queue<int> Q;

    for(int i: firstInfected){
        Q.push(i);
        ans[i] = 0;
    }

    for (int i = 1; i <= n;i++){
        turns[i] = adj[i].size() / 2;
    }

    while(!Q.empty()){
        int current = Q.front();
        Q.pop();

        for(int i: adj[current]){
            if(i==0)
                break;
            turns[i] -= 1;
            if(turns[i]<=0&&ans[i]==-1){
                Q.push(i);
                ans[i] = ans[current] + 1;
            }

        }

    }

    ans.erase(ans.begin());
    return ans;
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
#include <string>
#include <vector>
#include <iostream>

using namespace std;

long long solution(int n, vector<int> goal)
{
    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j >= 0; j--)
        {
            if (goal[i] < goal[j])
                ans++;
        }
    }
    return ans;
}

int main()
{
    int n;
    vector<int> goal;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        goal.push_back(k);
    }

    cout << solution(n, goal);
}
#include <iostream>
#include <string>
#include <vector>
#include <set>

using namespace std;

set<string> dfs(int b, bool *visited, set<string> s, vector<string> user_id, vector<string> banned_id)
{
    if (b == banned_id.size())
    {
        string str = "";
        for (int i = 0; i < user_id.size(); i++)
        {
            if (visited[i])
                str += i;
        }
        s.insert(str);
        return s;
    }

    for (int i = 0; i < user_id.size(); i++)
    {
        if (visited[i])
            continue;
        if (user_id[i].size() != banned_id[b].size())
            continue;

        bool temp = true;

        for (int j = 0; j < user_id[i].size(); j++)
        {
            if ((user_id[i][j] == banned_id[b][j]) || banned_id[b][j] == '*')
                continue;

            else
            {
                temp = false;
                break;
            }
        }

        if (temp == true)
        {
            visited[i] = true;
            s = dfs(b + 1, visited, s, user_id, banned_id);
            visited[i] = false;
        }
    }

    return s;
}

int solution(vector<string> user_id, vector<string> banned_id)
{
    int answer = 0;
    set<string> s;
    bool visited[8] = {
        false,
    };
    s = dfs(0, visited, s, user_id, banned_id);
    answer = s.size();
    return answer;
}
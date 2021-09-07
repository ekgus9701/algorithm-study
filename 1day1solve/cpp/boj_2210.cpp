#include <iostream>
#include <set>
using namespace std;

//인접해있는 네방향으로 이동
int dy[4] = {1, -1, 0, 0};
int dx[4] = {0, 0, 1, -1};

int map[5][5] = {0};
set<int> st;

void dfs(int y, int x, int cnt, int sum)
{

    if (cnt == 5) //5번 이동했으면
    {
        st.insert(sum);
        return;
    }

    for (int i = 0; i < 4; i++) //인접해있는 네방향으로 이동
    {
        int ny = y + dy[i];
        int nx = x + dx[i];

        if (ny < 0 || ny >= 5 || nx < 0 || nx >= 5)
            continue;

        dfs(ny, nx, cnt + 1, sum * 10 + map[ny][nx]);
    }
}
int main()
{

    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            cin >> map[i][j];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            dfs(i, j, 0, map[i][j]); //임의의 위치에서 시작
        }
    }

    cout << st.size() << endl;
    return 0;
}

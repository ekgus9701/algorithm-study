#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int n, m, a, b, c;
// 정점1, 정점2, 비용 c
struct edge
{
    int x, y, c;
};
// 비용이 작은 순으로 정렬할 것
bool cmp(edge u, edge v) { return u.c < v.c; }
vector<edge> g;
int parent[1001];

// 유니온 파인드
int find(int x)
{
    if (x == parent[x]) //본인이 루트노드라면
        return x;
    else //그렇지 않으면 재귀적으로 루트를 찾아 반환
        return parent[x] = find(parent[x]);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    while (m--)
    {
        cin >> a >> b >> c;
        // 어차피 a=b면 사이클이므로 필요없음
        if (a != b)
        {
            g.push_back({a, b, c});
        }
    }
    sort(g.begin(), g.end(), cmp);
    for (int i = 1; i <= n; i++)
        parent[i] = i;
    // 크루스칼 알고리즘
    // 정렬 후 가중치 작은것부터 유니온시킨다.
    int ans = 0;
    for (edge E : g)
    {
        // 연결이 안되었다면
        if (find(E.x) != find(E.y))
        {
            // 연결하기
            parent[find(E.y)] = find(E.x);
            ans += E.c;
        }
    }
    cout << ans << '\n';
}
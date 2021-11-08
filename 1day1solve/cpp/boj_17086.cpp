#include<iostream>
#include<queue>

using namespace std;

struct loc{
    int x,y;
};

int n,m,ans;

int a[50][50];
const int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
const int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
queue<loc> q;

void bfs() { 
    while (!q.empty()) {
        int x = q.front().x, y = q.front().y; q.pop();
        for (int k=0; k<8; k++) {
            int nx = x+dx[k], ny = y+dy[k];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue; //범위를 벗어나면 continue
            if (a[nx][ny]==0) { //상어가 없으면
                q.push({nx, ny});
                a[nx][ny] = a[x][y]+1; //안전거리 1 증가
            }
        }
    }
}

int main() {
   cin>>n>>m;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cin>>a[i][j];
            if (a[i][j]==1) q.push({i, j});
        }
    }
    bfs();
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (ans < a[i][j]) ans = a[i][j]; //최대를 구하기위해
        }
    }
    cout<< ans-1; //거리를 1부터 시작해서 뺌
    return 0;
}



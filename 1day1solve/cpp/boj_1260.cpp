#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<algorithm>

using namespace std;

vector<int> adj[1010];
int visited1[1010]={0};
int visited2[1010]={0};

void dfs(int start) {
   
    visited1[start]=1; //방문표시
    cout<<start<<" ";
    for(int i=0;i<adj[start].size();i++){
        int next=adj[start][i];
        if(visited1[next]!=1){ //방문하지않았으면
            dfs(next);
            
        }
    }
}


void bfs(int v) {
    queue<int> q;
    q.push(v);
    visited2[v] = 1;
    while (!q.empty()) {
        int cur = q.front();
        q.pop();
        cout << cur << " ";
        for (int i = 0; i < adj[cur].size(); i++) {
            int next = adj[cur][i];
            if (!visited2[next]) {
                visited2[next] = 1;
                q.push(next);
            }
        }
    }
}

        

int main(){
    int n,m,v;
    cin>>n>>m>>v;
    
    int a,b;
    
    for(int i=1;i<=m;i++){
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
        
    }
    
    for(int i=1;i<=n;i++){
        sort(adj[i].begin(),adj[i].end());
        
    }
    
    
   
    dfs(v);
    cout<<"\n";
    bfs(v);
    
    return 0;
    
}




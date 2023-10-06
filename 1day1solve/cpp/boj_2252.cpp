#include<iostream>
#include<queue>
#include<iostream>

using namespace std;
int n,m;

int deg[32010]={0};
vector<int> adj[32010];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    queue <int> q;
    
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        
        adj[a].push_back(b);
        deg[b]++;
        
    }
    
    //cout<<adj[1][0]<<endl;
    
    for(int i=1;i<=n;i++){
        if(deg[i]==0)
            q.push(i);
    }
    
    while(!q.empty()){
        int front=q.front();
        cout<<front<<" ";
        q.pop();
        
        for(int i=0;i<adj[front].size();i++){
            deg[adj[front][i]]--;
            if(deg[adj[front][i]]==0){
                q.push(adj[front][i]);
            }
        }
        
        
    }
    
}


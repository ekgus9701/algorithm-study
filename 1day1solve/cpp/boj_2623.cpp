#include<iostream>
#include<vector>
#include<queue>

using namespace std;

vector<int> adj[1005];
int deg[1005];

int n,m;
vector<int> tmp;

int main(){
    
    cin>>n>>m;
    
    for(int i=0;i<m;i++){
        int a; //보조피디가 담당한 가수의 수
        cin>>a;
        
        for(int j=0;j<a;j++){
            int b;
            cin>>b;
            tmp.push_back(b);
        }
        
        for(int j=0;j<a-1;j++){
            adj[tmp[j]].push_back(tmp[j+1]);
            if(j!=0)
                deg[tmp[j]]++;
        }
        
        deg[tmp[a-1]]++;

        tmp.clear();
    }
    
    queue<int> q;
    
    for(int i=1;i<=n;i++){
        if(deg[i]==0){
            q.push(i);
        }
    }
    
    vector<int> answer;
    
    while(!q.empty()){
        int front=q.front();
        answer.push_back(front);
        q.pop();
        
        for(auto nxt:adj[front]){
            deg[nxt]--;
            
            if(deg[nxt]==0) q.push(nxt);
        }
        
    }
    
    if(answer.size()!=n) cout<<0;
    else{
        for(int i=0;i<answer.size();i++){
            cout<<answer[i]<<"\n";
        }
    }
    
}

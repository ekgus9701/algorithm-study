#include <iostream>
#include<vector>
#include<stack>

using namespace std;

vector<int> adj[110];
int visited[110]={0};
int sum=0;
void dfs(int start){
    stack<int> st;
    st.push(start);
    visited[start]=1;
    while(!st.empty()){
        int cur=st.top();
        st.pop();
        for(int next:adj[cur]){
            if(visited[next]==1) continue;
            visited[next]=1;
            sum++;
            
            st.push(next);
        }
    }
}

int main(){
    int a,b;
    int c,d;
    
    cin>>a>>b;
    for(int i=1;i<=b;i++){
        cin>>c>>d;
        
        adj[c].push_back(d);
        adj[d].push_back(c);
    }
    
    dfs(1);
    cout<<sum;
    
}

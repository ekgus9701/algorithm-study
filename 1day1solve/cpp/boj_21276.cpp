#include<iostream>
#include<vector>
#include<queue>
#include<unordered_map>
#include<algorithm>

using namespace std;

vector<int> adj[1005];
int deg[1005];

string name[1005];
vector<int> ch[1005]; //각 사람들의 자녀들 고유번호를 저장할 벡터 ch
unordered_map<string,int> um;

int main(){
        
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++){
        string s;
        cin>>s;
        name[i]=s;
    }
    
    sort(name+1,name+n+1);
    
    for(int i=1;i<=n;i++){
        um.insert({name[i],i});
    }
    
    int m;
    cin>>m;
    
    for(int i=0;i<m;i++){
        string a,b;
        cin>>a>>b;
        
        adj[um[b]].push_back(um[a]);
        
        deg[um[a]]++;

    }
    
    vector<int> sizo;
    for(int i=1;i<=n;i++){
        if(deg[i]==0){
            sizo.push_back(i);
        }
    }
    
    cout<<sizo.size()<<"\n";
    
    for(int i=0;i<sizo.size();i++){
        cout<<name[sizo[i]]<<" ";
    }
    
    cout<<"\n";
    
    for(int i=0;i<=n;i++){
        sort(adj[i].begin(),adj[i].end());
        
        for(int c: adj[i]){
            if(deg[c]-deg[i]==1){
                ch[i].push_back(c);
            }
        }
    }
        
        for(int i=1;i<=n;i++){
            int sze=ch[i].size();
            
            cout<<name[i]<<" "<<sze<<" ";
            for(int c:ch[i]){
                cout<<name[c]<<" ";
            }
            cout<<"\n";
            
        }
    
    
    
    
    
}

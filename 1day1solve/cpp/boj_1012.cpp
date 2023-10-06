#include<iostream>
#include<queue>

using namespace std;

int arr[50][50];
int visited[50][50];
int cnt=0;

int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};

void bfs(int arr[50][50],int x,int y,int n,int m){
    queue<pair<int,int>> q;

    if(arr[x][y]==0||visited[x][y]) return;
    q.push({x,y});
    visited[x][y]=1;
    
    while(!q.empty()){
        int cx=q.front().first;
        int cy=q.front().second;
        //cout <<"cx "<<cx<<" "<<cy<<endl;
        q.pop();
        
        for(int i=0;i<4;i++){
            int nx=cx+dx[i];
            int ny=cy+dy[i];
            //cout<<nx<<" "<<ny<<" "<<visited[nx][ny]<<" "<<arr[nx][ny]<<endl;
            if(nx<0||ny<0||nx>=n||ny>=m) continue;
            
            
            if(visited[nx][ny]==1||arr[nx][ny]==0) continue;
            //cout <<"nx "<<nx<<" "<<ny<<endl;
            visited[nx][ny]=1;
            //cout<<nx<<" "
            q.push({nx,ny});

        }

    }
    cnt++;
    //cout<<cnt<<endl;
    
    
    return;
    
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> ans;
    
    vector<pair<int,int>> xy;
    int T,m,n,k;
    cin>>T;
    
    for(int i=0;i<T;i++){
        cin>>m>>n>>k;
        cnt=0;
        for(int a=0;a<50;a++){
            for(int b=0;b<50;b++){
                visited[a][b]=0;
                arr[a][b]=0;
            }
        }
    
        
        for(int j=0;j<k;j++){
            int x,y;
            cin>>x>>y;
            
            arr[y][x]=1;
            
            xy.push_back({y,x});
        }
        
        for(int j=0;j<xy.size();j++){
            bfs(arr,xy[j].first,xy[j].second,n,m);
        }
        
        ans.push_back(cnt);
    }
    
    for(int i=0;i<T;i++){
        cout<<ans[i]<<"\n";
    }
}



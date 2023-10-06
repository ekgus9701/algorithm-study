#include<iostream>
#include<queue>
#include<climits>
#include<algorithm>

using namespace std;

int arr[1005][1005];
int R,C;

bool escape=false;
int times=INT_MAX;
int fireTime[1005][1005];
int JHTime[1005][1005];
int fireVis[1005][1005];
int JHVis[1005][1005];
int jx=0,jy=0,fx=0,fy=0;
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};


void bfsFire(int arr[1005][1005],vector<pair<int,int>> v){
    queue<pair<int,int>> q;
    
    
    for(int i=0;i<v.size();i++)
    {
        q.push({v[i].first,v[i].second});
        fireVis[v[i].first][v[i].second]=1;
        fireTime[v[i].first][v[i].second]=0;
    }
    
    while(!q.empty()){
        int cx=q.front().first;
        int cy=q.front().second;
        
        q.pop();
        for(int i=0;i<4;i++){
            
            int nx=cx+dx[i];
            int ny=cy+dy[i];
            if(nx<0||ny<0||nx>=R||ny>=C){
                continue;
            }
            
            if(arr[nx][ny]!='.'||fireVis[nx][ny]) continue;
            
            q.push({nx,ny});
            fireVis[nx][ny]=1;
            fireTime[nx][ny]=fireTime[cx][cy]+1;
        }
    }
    return;
    
}

void bfs(int arr[1005][1005],int x,int y){
    queue<pair<int,int>> q;
    q.push({x,y});
    JHVis[x][y]=1;
    JHTime[x][y]=0;
    
    while(!q.empty()){
        int cx=q.front().first;
        int cy=q.front().second;
        //cout<<cx<<" "<<cy<<endl;
        //cout<<JHTime[cx][cy]<<endl;
        q.pop();
        
        if(cx==0||cy==0||cx==R-1||cy==C-1){
            escape=true;
            times=JHTime[cx][cy]+1;
            
            break;
        }
        for(int i=0;i<4;i++){
            
            int nx=cx+dx[i];
            int ny=cy+dy[i];
            if(nx<0||ny<0||nx>=R||ny>=C){
                continue;
            }
            
            if(arr[nx][ny]!='.'||JHVis[nx][ny]) continue;
            
            if(fireTime[nx][ny]!=-1&&fireTime[nx][ny]<=JHTime[cx][cy]+1) continue;
            
            q.push({nx,ny});
            JHVis[nx][ny]=1;
            JHTime[nx][ny]=JHTime[cx][cy]+1;
            times++;
        }
    }
    return;
}

int main(){
    
    
    cin>>R>>C;
    
    vector<pair<int,int>> fv;
    
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            
            fireTime[i][j]=-1;
            JHTime[i][j]=-1;
            
            char c;
            cin>>c;
            arr[i][j]=c;
            
            if(c=='J'){
                jx=i;jy=j;
                
                
            }
            else if(c=='F'){
                fv.push_back({i,j});
                
               
            }
        }
    }
    
    
   
    bfsFire(arr,fv);
    bfs(arr,jx,jy);
    
    if(!escape) cout<<"IMPOSSIBLE";
    else{
        cout<<times;
    }
    
    
}

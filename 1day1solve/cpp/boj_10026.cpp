#include<iostream>
#include<queue>

using namespace std;

char arr[101][101];
int yes=0; //적록색약
int no=0; //적록색약 아닌
int n;
int dx[4]={1,-1,0,0};
int dy[4]={0,0,-1,1};

int visYes[101][101];
int visNo[101][101];

void bfsYes(int i,int j, char arr[101][101]){
    
    char color=arr[i][j];
    if(visYes[i][j]) return;
    queue<pair<int,int>> q;
    
    
    q.push({i,j});
    visYes[i][j]=1;
    
    while(!q.empty()){
        int cx=q.front().first;
        int cy=q.front().second;
        q.pop();
        
        for(int i=0;i<4;i++){
            int nx=cx+dx[i];
            int ny=cy+dy[i];
            
            if(nx<0||ny<0||nx>=n||ny>=n){
                continue;
            }
            if(visYes[nx][ny]) continue;
            
            if(color=='B'&&arr[nx][ny]!='B'){
                continue;
            }
            else if(color=='R'||color=='G'){
                if(arr[nx][ny]=='B') continue;
            }
            
            q.push({nx,ny});
            visYes[nx][ny]=1;
            
        }
    }
    
    yes++;
    
    return;
}

void bfsNo(int i,int j, char arr[101][101]){

    char color=arr[i][j];
    if(visNo[i][j]) return;
    queue<pair<int,int>> q;
    
    
    q.push({i,j});
    visNo[i][j]=1;
    
    while(!q.empty()){
        int cx=q.front().first;
        int cy=q.front().second;
        q.pop();
        
        for(int i=0;i<4;i++){
            int nx=cx+dx[i];
            int ny=cy+dy[i];
            
            if(nx<0||ny<0||nx>=n||ny>=n){
                continue;
            }
            if(visNo[nx][ny]) continue;
            
            if(color=='B'&&arr[nx][ny]!='B'){
                continue;
            }
            else if(color=='G'&&arr[nx][ny]!='G'){
                continue;
            }
            else if(color=='R'&&arr[nx][ny]!='R'){
                continue;
            }
            
            
            q.push({nx,ny});
            visNo[nx][ny]=1;
            
        }
    }
    
    no++;
    
    return;
}
int main(){
    
    
    cin>>n;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            
            cin>>arr[i][j];
            
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            
            bfsYes(i,j,arr);
            bfsNo(i,j,arr);
            
        }
    }
    
    
    cout<<no<<" "<<yes;
    
    
}

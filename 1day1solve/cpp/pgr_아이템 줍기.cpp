#include <string>
#include <vector>
#include<iostream>
#include<climits>
#include<algorithm>

using namespace std;

int arr[101][101];
int visited[101][101];
int minnum=INT_MAX;
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};

void dfs(int sx,int sy,int ex,int ey,int cnt){
    
    if(sx==ex&&sy==ey) {
        
        minnum=min(minnum,cnt); 
        return;
    }
    
    for(int i=0;i<4;i++){
        int nx=sx+dx[i];
        int ny=sy+dy[i];
        
        if(arr[nx][ny]==7){
            arr[nx][ny]=0;
            dfs(nx,ny,ex,ey,cnt+1);
            arr[nx][ny]=7;
        }
    }
        
    
    
}

int solution(vector<vector<int>> rectangle, int characterX, int characterY, int itemX, int itemY) {
    int answer = 0;
    characterX*=2;characterY*=2;itemX*=2;itemY*=2;
    
    for(int i=0;i<rectangle.size();i++){
        for(int a=rectangle[i][0]*2;a<=rectangle[i][2]*2;a++){
            for(int b=rectangle[i][1]*2;b<=rectangle[i][3]*2;b++){
                arr[a][b]=7;
            }
        }
    }
    
    for(int i=0;i<rectangle.size();i++){
        for(int a=rectangle[i][0]*2+1;a<=rectangle[i][2]*2-1;a++){
            for(int b=rectangle[i][1]*2+1;b<=rectangle[i][3]*2-1;b++){
                arr[a][b]=0;
            }
        }
    }
    
    dfs(characterX,characterY,itemX,itemY,0);
    
    /*
    for(int i=0;i<50;i++){
        for(int j=0;j<50;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }*/
    
    
    return minnum/2;
}

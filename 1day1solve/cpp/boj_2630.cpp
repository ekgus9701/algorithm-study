#include<iostream>

using namespace std;

int arr[129][129];
int blue=0;
int white=0;

void divide(int x,int y,int k){
    bool check=false;
    int first_color=arr[x][y];
    
    for(int i=x;i<x+k;i++){
        for(int j=y;j<y+k;j++){
            if(first_color!=arr[i][j]){
                check=true;
                break;
            }
        }
    }
    
    if(check){
        divide(x,y,k/2);
        divide(x+k/2,y,k/2);
        divide(x,y+k/2,k/2);
        divide(x+k/2,y+k/2,k/2);
        
    }
    else{
        if(first_color==1){
            blue++;
        }
        else{
            white++;
        }
    }
    
}

int main(){
    int n;
    
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    
    divide(0,0,n);
    
    cout<<white<<endl<<blue;
    
    
    
}

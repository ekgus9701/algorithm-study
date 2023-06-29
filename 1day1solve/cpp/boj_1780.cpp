#include<iostream>

using namespace std;

int arr[2188][2188];
int minusone=0;
int one=0;
int zero=0;


void divide(int x,int y, int k){
    int first_num=arr[x][y];
    bool check=false;
    for(int i=x;i<x+k;i++){
        for(int j=y;j<y+k;j++){
            if(first_num!=arr[i][j]){
                check=true;
                break;
            }
        }
    }
    
    if(check){
        divide(x,y,k/3);
        divide(x+k/3,y,k/3);
        divide(x,y+k/3,k/3);
        divide(x+k/3,y+k/3,k/3);
        divide(x+k/3*2,y,k/3);
        divide(x,y+k/3*2,k/3);
        divide(x+k/3*2,y+k/3*2,k/3);
        divide(x+k/3*2,y+k/3,k/3);
        divide(x+k/3,y+k/3*2,k/3);
        
    }
    else{
        if(first_num==-1){
            minusone++;
        }
        else if(first_num==0){
            zero++;
        }
        else{
            one++;
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
    
    cout<<minusone<<"\n"<<zero<<"\n"<<one;
    
}

#include<iostream>

using namespace std;

int main(){
    int a,b,c;
    int w[20][20][20];
    int ans=0;
    
    w[0][0][0]=1;
    //w[0][0][1]
    
    
    cin>>a>>b>>c;
    if(a==-1&&b==-1&&c==-1){
        return 0;
    }
    
    else if(a<=0||b<=0||c<=0) {
        ans=1;
    }
    
    else if(a<b&&b<c){
        ans=w[a][b][c-1]+w[a][b-1][c-1]-w[a][b-1][c];
    }
    else{
        ans=w[a-1][b][c]+w[a-1][b-1][c]+w[a-1][b][c-1]-w[a-1][ b-1][ c-1];
    }
    
    cout<<"w("<<a<<", "<<b<<", "<<c<<") = "<<ans<<endl;
    
    
    
    
    
    
    
}

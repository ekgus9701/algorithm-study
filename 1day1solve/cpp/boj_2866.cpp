#include <iostream>

using namespace std;
char arr[1001][1001];
long long arr1[1001][1001];

int m_pow(int n, int m)
{
    int nn = n;
    for (int i = 0; i < (m-1); i++)
        n *= nn;
    return n;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int r,c;
    int x=27;
    int count=0;
      cin>>r>>c;


    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
            
        }
    }
    
    for(int j=0;j<c;j++){
        arr1[r-1][j]=arr[r-1][j]-96;
    }

    

     for(int j=0;j<c;j++){
         for(int i=r-2;i>=0;i--){
             arr1[i][j]=arr1[i+1][j]+(arr[i][j]-96)*m_pow(x,r-i-1);
             
         }
     }

    for(int i=1;i<r;i++){
        for(int j=0;j<c;j++){
            for(int l=j+1;l<c;l++){
               
                if(arr1[i][j]==arr1[i][l]){
                    cout<<count;
                    return 0;
                }

            }
        }
        count++;
    }
    cout<<count;
     




    


}
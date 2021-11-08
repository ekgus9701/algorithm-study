#include<iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int A,B,check=1;
    cin>>A>>B;

    while(true){
        if(A>B){
            cout<<"-1";
            break;
        }

        else if(B==A){
            cout<<check;
            break;
        }
        else{
            if(B%2==0){
                B/=2;
                check++;
            }
            else if(B%10==1){ 
                B-=1;
                B/=10;
                check++;
                    
            }
            else{
                cout<<"-1";
                break;
            }
        }
    
    }

}
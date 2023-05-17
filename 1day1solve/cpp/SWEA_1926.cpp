#include<iostream>

using namespace std;

int main(){
    int n;
    int a,b,c;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i<10){
            if(i%10==3||i%10==6||i%10==9){
                cout<<"-"<<" ";
            }
            else{
                cout<<i<<" ";
            }
        }
        
        else if(i<100){
            if(i/10==3||i/10==6||i/10==9){
                if(i%10==3||i%10==6||i%10==9)
                    cout<<"--"<<" ";
                else
                    cout<<"-"<<" ";
            }
            else if(i%10==3||i%10==6||i%10==9)
                cout<<"-"<<" ";
            else{
                cout<<i<<" ";
            }
            
        }
        
        else{
            if(i/100==3||i/100==6||i/100==9){
                if((i%100)/10==3||(i%100)/10==6||(i%100)/10==9)
                {
                    if(i%10==3||i%10==6||i%10==9){
                        cout<<"---"<<" ";
                    }
                    else{
                        cout<<"--"<<" ";
                    }
                }
                else{
                    if(i%10==3||i%10==6||i%10==9){
                        cout<<"--"<<" ";
                    }
                    else{
                        cout<<"-"<<" ";
                    }
                }
            }
            else{
                if((i%100)/10==3||(i%100)/10==6||(i%100)/10==9)
                {
                    if(i%10==3||i%10==6||i%10==9){
                        cout<<"--"<<" ";
                    }
                    else{
                        cout<<"-"<<" ";
                    }
                }
                else{
                    if(i%10==3||i%10==6||i%10==9){
                        cout<<"-"<<" ";
                    }
                    else{
                        cout<<i<<" ";
                    }
                }
            }
                
            
        }
        
        /*b=(i%100)/10;
        if(i<10){
            if(i%10==3||i)
        }*/
        
    }
}

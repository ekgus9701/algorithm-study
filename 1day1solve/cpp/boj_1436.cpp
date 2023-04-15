#include<iostream>
#include<string>

using namespace std;

int main(){
    int n,temp,num=666;
    string s;
    
    cin>>n;
    temp=1;
    if(n==1)
        cout<<666;
    else{
        while(1){
            num++;
            s=to_string(num);
            if(s.find("666")!=string::npos){
                temp++;
            }
            if(temp==n){
                cout<<num;
                break;
            }
        }
    }
}


#include <iostream>
#include <stack>
#include<deque>
#include<algorithm>

using namespace std;
int main(){
    int n,a;
    char ch;
    deque<char> dq;
    stack<int> s;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a!=3){
            cin>>ch;
            s.push(a);
            if(a==1){
                
                dq.push_back(ch);
            }
            else if(a==2){
                dq.push_front(ch);
            }
           
        }
        
        else if(a==3){
            if(!dq.empty()){
                
                if(s.top()==1){
                    dq.pop_back();
                    s.pop();
                }
                else if(s.top()==2){
                    dq.pop_front();
                    s.pop();
                }
            }
            else{
                continue;
            }
        }
    }
    if(dq.empty()){
        cout<<0;
    
    }
    else{
        for(int l=0;l<dq.size();l++){
            cout<<dq[l];
        }
    }
    
}

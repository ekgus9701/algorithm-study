#include <iostream>
#include<string>
#include<stack>

using namespace std;

int main(){
    int n;
    stack<char> stack1;
    string s;
    int ans=1;
    
    cin>>n;
    for(int i=0;i<n;i++){
        while( !stack1.empty() ) stack1.pop();
        ans=1;
        cin>>s;
        if(s[0]==')'){ //)로 시작하는 경우
            cout<<"NO"<<"\n";
            ans=-1;
            continue;
        }
        if(s[s.size()-1]=='('){ //(로 끝나는 경우
            cout<<"NO"<<"\n";
            ans=-1;
            continue;
        }
        
        for(int j=0;j<s.size();j++){
            
            if(s[j]=='('){ //(면 스택에 넣기
                stack1.push(s[j]);
            }
            
            
            else if(s[j]==')'){
                if(stack1.empty()){ //스택이 비어있다면
                    cout<<"NO"<<"\n";
                    ans=-1;
                    break;
                 }
                else{ //스택이 비어있지않다면 ()짝이 맞는거니까
                    stack1.pop();
                }
            }
            
            if(j==s.size()-1&&!stack1.empty()){ //스택에 (가 남아있는 경우
                
                cout<<"NO"<<"\n";
                ans=-1;
                break;
            }
            if(j==s.size()-1&&ans!=-1){ //짝이 모두 맞는 경우
                cout<<"YES"<<"\n";
                break;
            }
           
            
        }
        
    }
    
}

#include<string>
#include <iostream>
#include<stack>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    char temp;
    stack<char> stk;
    if(s[0]==')'){
        answer=false;
        return answer;
    }
    
    if(s[s.length()-1]=='('){
        answer=false;
        return answer;
    }
    for(int i=0;i<s.length();i++){
        if(s[i]=='(')
            stk.push(s[i]);
        else{
            temp=stk.top();
            if(temp=='('){
                stk.pop();
            }
            else{
                answer=false;
                return answer;
            }
        }
    }
    
    if(!stk.empty()){
        answer=false;
    }
    

    return answer;
}

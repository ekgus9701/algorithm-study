#include <iostream>
#include<string>
#include<stack>
using namespace std;

int solution(string s)
{
    int answer = -1;
    stack<char> stk;
    char stkTop;
    if(s.length()==1){
        return 0;
    }
    
  for(int i=0;i<s.length();i++){
      if(stk.size()==0){
          stk.push(s[i]);
          continue;
      }
      stkTop=stk.top();
      if(stkTop==s[i]){
          stk.pop();
      }
      else{
          stk.push(s[i]);
      }
      
      if(s.length()-1==i){
          if(stk.size()==0){
              return 1;
          }
          else{
              return 0;
          }
      }
      
  }
    if(stk.size()>=1){
        return 0;
    }
    

    return answer;
}

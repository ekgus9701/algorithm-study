#include <string>
#include <vector>
#include <stack>
#include<queue>


using namespace std;

int solution(vector<int> order) {
    int answer = 0;
    stack<int> st;
    queue<int> q;
    
    for(int i=0;i<order.size();i++){
        q.push(i+1);
    }
    int i=0,j=0;
    while(true){
        if(j==10000000) break;
        j++;
        
        if(q.empty()&&st.empty()) { break;}
        if(!q.empty()){
            
            if(q.front()!=order[i]){
                
                st.push(q.front());
                q.pop();
            }

            else if(q.front()==order[i]){
              
                q.pop();
                i++;
                answer++;
            }
        }
        
        
        if(!st.empty()){
        
            if(st.top()==order[i]){
                st.pop();
                i++;
                answer++;
            }
            
            
        }
        
    }
        
    
    return answer;
}

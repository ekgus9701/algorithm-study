#include <string>
#include <vector>
#include <queue>
#include<sstream>
#include<iostream>

using namespace std;

vector<int> solution(vector<string> operations) {
    vector<int> answer;
    
    priority_queue<int> pq1; //내림차순 정렬
    priority_queue <int, vector<int>, greater<int>> pq2; //오름차순 정렬
    
    int plus=0,plus2=0;
    
    for(int i=0;i<operations.size();i++){
        stringstream ss(operations[i]);
        string op, num;
        ss>>op>>num;
        
        if(op=="I"){
            plus2++;
            pq1.push(stoi(num));
            pq2.push(stoi(num));
        }
        
        else if(op=="D"){
            if(plus==plus2){
                while( !pq1.empty() ) pq1.pop();
                while( !pq2.empty() ) pq2.pop();
                continue;
            }
            if(num=="1"){ //최댓값 삭제
                plus++;
                pq1.pop();
            }
            else{ //최솟값 삭제
               plus++;
               pq2.pop();
            }
            
        }
         if(plus==plus2){ //삽입과 삭제의 개수가 같으면
                while( !pq1.empty() ) pq1.pop();
                while( !pq2.empty() ) pq2.pop();
                continue;
            }
        
    } 
    
    if(plus==plus2){
        answer.push_back(0);
        answer.push_back(0);
    }
 
    else{
        answer.push_back(pq1.top());
        answer.push_back(pq2.top());
    }
    
    
    return answer;
}

#include <string>
#include <vector>
#include <queue>
#include<iostream>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    priority_queue pq{greater<int>{}, scoville}; //오름차순으로 정렬
    
    while(true){
       
        if(pq.size()==1){ // 모든 음식의 스코빌 지수를 k이상으로 만들 수 없는 경우
            if(pq.top()<K){
                return -1;
            }
        }
        
        if(pq.top()<K){ //가장 작은 원소가 k보다 작은경우
            int a=pq.top();
            pq.pop();
            int b=pq.top();
            pq.pop();
            int sum=a+b*2;
            pq.push(sum);
            answer++;
                
        }
        else{ //가장 작은 원소가 k보다 큰 경우
            return answer;
        }
        
    }
    
    return answer;
}

#include <string>
#include <vector>
#include<map>
#include<iostream>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 0;
    
    map<string,int> m;
    
    for(int i=0;i<clothes.size();i++){
        m[clothes[i][1]]++;
    }
     //입지않는 경우를 포함해서 계산
    //모자 2 안경 2였다면
    //모자 3(안입을때를 더해서) 안경3(안입을때를 더해서)
    //이렇게 계산하는 거임
    
    int cnt=1; 
    for(auto iter:m){
        cnt*=iter.second+1; 
    }
    
    answer=cnt-1;
    
    return answer;
}

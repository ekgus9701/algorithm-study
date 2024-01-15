#include <string>
#include <vector>
#include<iostream>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    
    for(int i=0;i<babbling.size();i++){
        bool chk=false;
        for(int j=0;j<babbling[i].size();j++){
            if(babbling[i].substr(j,3)=="aya") j+=2;
            else if(babbling[i].substr(j,2)=="ye") j++;
            else if(babbling[i].substr(j,3)=="woo") j+=2;
            else if(babbling[i].substr(j,2)=="ma") j++;
            else{
                chk=true; break;
            }
        }
        if(!chk) answer++;
    }
    
    
        
    return answer;
}

#include <string>
#include <vector>
#include<iostream>

using namespace std;


vector<int> solution(int n, long long left, long long right) {
    vector<int> answer;
    
    for(long long i=left;i<=right;i++){
        int mok=i/n;
        int namoji=i%n;
        
        if(mok<namoji){
            answer.push_back(namoji+1);
        }
        else{
            answer.push_back(mok+1);
        }
    }
  
     
    return answer;
}

#include <string>
#include <vector>
#include<algorithm>
#include<iostream>

using namespace std;

bool cmp(int a,int b){
   
    return to_string(a)+to_string(b)<to_string(b)+to_string(a);
}

string solution(vector<int> numbers) {
    string answer = "";
    
    sort(numbers.begin(),numbers.end(),cmp);
    for(int i=numbers.size()-1;i>=0;i--){
        
        answer+=to_string(numbers[i]);
    }
    
    if(answer[0]=='0') answer="0";
    
    return answer;
}

#include <string>
#include <vector>
#include<unordered_set>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    
    unordered_multiset<string> s; //중복 ok
    
    for(int i=0;i<participant.size();i++){
        s.insert(participant[i]);
    }
    
    for(int i=0;i<completion.size();i++){
        s.erase(s.find(completion[i]));
        
    }
    
    for(auto x:s){
        answer=x;
    }
    
    return answer;
}

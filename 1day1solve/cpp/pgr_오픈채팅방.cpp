#include <string>
#include <vector>
#include<unordered_map>
#include<sstream>

using namespace std;

vector<string> solution(vector<string> record) {
    vector<string> answer;
    unordered_map<string, string> um;
    vector<pair<string,string>> doing;
    
    for(int i=0;i<record.size();i++){
        
        istringstream iss(record[i]);
        string s1, s2,s3;
        iss>>s1>>s2>>s3;
        
        doing.push_back({s1,s2});
        
        if(s3!="")  
            um[s2]=s3;

    }
    
    for(int i=0;i<doing.size();i++){
       
        string nickname=um[doing[i].second];
      
        string s=nickname;
        if(doing[i].first=="Enter"){
            s+="님이 들어왔습니다.";
            answer.push_back(s);
        }
        else if(doing[i].first=="Leave"){
            s+="님이 나갔습니다.";
            answer.push_back(s);
        }
        
    }
    
    
    return answer;
}

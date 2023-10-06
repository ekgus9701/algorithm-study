#include <string>
#include <vector>
#include<unordered_set>

using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
    
    unordered_set<string> us;
    
    for(int i=0;i<phone_book.size();i++){
        us.insert(phone_book[i]);
    }
    
    for(int i=0;i<phone_book.size();i++){
        string s="";
        for(int j=0;j<phone_book[i].size();j++){
            s+=phone_book[i][j];
            
            if(us.find(s)!=us.end() && s!=phone_book[i]){
                answer=false;
            }
        }
    }
    
    return answer;
}

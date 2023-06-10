#include <string>
#include <vector>
#include <map>

using namespace std;


vector<string> solution(vector<string> players, vector<string> callings) {
    vector<string> answer;
    map<string,int> rank;
    map<int,string> rank2;
    
    for(int i=0;i<players.size();i++){
        rank.insert(pair(players[i],i));
        rank2.insert(pair(i,players[i]));
    }
    
    
    for(int i=0;i<callings.size();i++){
        int current =rank[callings[i]]; //3
        string front=rank2[current-1]; //poe
        
        rank[front]=current;
        rank[callings[i]]=current-1;
        rank2[current]=front;
        rank2[current-1]=callings[i];
        
        
    }
    
    for(auto c:rank2) answer.push_back(c.second);
    return answer;
}

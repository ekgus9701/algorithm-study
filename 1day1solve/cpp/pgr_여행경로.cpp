#include <string>
#include <vector>
#include<algorithm>

using namespace std;
vector<string> answer;
bool flag=false;
int cnt=0;

bool visited[10005]; //티켓을 썼는지 안썼는지


void dfs(string city,vector<vector<string>> &tickets){
    if(cnt==tickets.size()) flag=true;
    answer.push_back(city);
    for(int i=0;i<tickets.size();i++){
        if(visited[i]||tickets[i][0]!=city) continue;
        visited[i]=true;
        cnt++;
        dfs(tickets[i][1],tickets);

        if(!flag){
            answer.pop_back();
            visited[i]=false;
        }
    }

}

vector<string> solution(vector<vector<string>> tickets) {

    sort(tickets.begin(),tickets.end());
    dfs("ICN",tickets);

    return answer;
}

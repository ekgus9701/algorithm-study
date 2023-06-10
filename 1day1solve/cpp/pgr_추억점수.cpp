#include <string>
#include <vector>
#include<map>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    int ans=0;
    
    map<string,int> m;
    
    for(int i=0;i<name.size();i++){
        m[name[i]]=yearning[i];
    }
    
    for(int j=0;j<photo.size();j++){
        for(int k=0;k<photo[j].size();k++){
           
            ans+=m[photo[j][k]];
        }
        answer.push_back(ans);
        ans=0;
    }
    
    
    
    return answer;
}

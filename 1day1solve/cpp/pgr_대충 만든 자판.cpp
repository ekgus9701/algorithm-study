#include <string>
#include <vector>
#include<iostream>
#include<map>
using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    map<char,int> m;
   
    for(int i=0;i<keymap.size();i++){
        for(int j=0;j<keymap[i].size();j++){
            if (m.find(keymap[i][j]) == m.end()) {
                m[keymap[i][j]]=j+1;
            }
            else{
                int original=m[keymap[i][j]];
                if(original>j){
                    m[keymap[i][j]]=j+1;
                }
                
            }
            
            //cout<<keymap[i][j]<<" "<<m[keymap[i][j]]<<endl;
            
        }
    }
    int ans=0;
    for(int i=0;i<targets.size();i++){
        ans=0;
        for(int j=0;j<targets[i].size();j++){
            if (m.find(targets[i][j]) == m.end()) {
                ans=0;
                break;
             }
            ans+=m[targets[i][j]];
             
        }
        if(ans!=0)
            answer.push_back(ans);
        if(ans==0)
            answer.push_back(-1);
        
    }
    
    if(answer.empty()) answer.push_back(-1);
    
    return answer;
}

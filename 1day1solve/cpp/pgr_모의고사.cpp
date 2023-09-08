#include <string>
#include <vector>
#include<iostream>
#include<algorithm>

using namespace std;

bool comp(const pair<int,int> &a, const pair<int,int> &b){
    return a.first>b.first;
}

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int cnt1=0;
    int cnt2=0;
    int cnt3=0;
    
    vector<int> list={1,2,3,4,5};
    vector<int> list2={2,1,2,3,2,4,2,5};
    vector<int> list3={3,3,1,1,2,2,4,4,5,5};
    
    for(int i=0;i<answers.size();i++){
        
            //cout<<answer[i]<<" "<<list[j%list.size()];
            if(answers[i]==list[i%list.size()]){
                cnt1++;
            }
        
    }
    for(int i=0;i<answers.size();i++){
        
            if(answers[i]==list2[i%list2.size()]){
                cnt2++;
            }
        
    }
    for(int i=0;i<answers.size();i++){
        
            if(answers[i]==list3[i%list3.size()]){
                cnt3++;
            }
    }
    
    vector<pair<int,int>> v;
    v.push_back({cnt1,1});
    v.push_back({cnt2,2});
    v.push_back({cnt3,3});
    
    sort(v.begin(),v.end(),comp);
    
    
    
    for(int i=0;i<v.size();i++){
        if(v[0].first==v[i].first){
            answer.push_back(v[i].second);
        }
        else break;
    }
    
    return answer;
}

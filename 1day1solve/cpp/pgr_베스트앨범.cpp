#include <string>
#include <vector>
#include<unordered_map>
#include<iostream>
#include<algorithm>

using namespace std;

bool cmp(pair<string, int> a, pair<string, int> b){
    return a.second>b.second;
}

bool cmp2(pair<string, pair<int,int>> a, pair<string, pair<int,int>> b){
    if(a.second.first==b.second.first){
        return a.second.second<b.second.second;
    }
    return a.second.first>b.second.first;
}

vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> answer;
    unordered_map<string, int> um;
    unordered_map<string, int> cnt;
    vector<pair<string,pair<int,int>>> music;
    
    for(int i=0;i<genres.size();i++){
        um[genres[i]]+=plays[i];
    }
    
    vector<pair<string, int>> v(um.begin(),um.end());
    
    sort(v.begin(),v.end(),cmp);
    
    for(int i=0;i<genres.size();i++){
        music.push_back({genres[i],{plays[i],i}});
    }
    
    sort(music.begin(),music.end(),cmp2);
   

    
    for(int i=0;i<music.size();i++){
         if(cnt[music[i].first]==2){
             music.erase(music.begin()+i);
             i--;
         }
        else{
            cnt[music[i].first]++;
        }
       
    }

   
    for(int i=0;i<v.size();i++){
        for(int j=0;j<music.size();j++){
            if(v[i].first==music[j].first){
                answer.push_back(music[j].second.second);
            }
        }
    }
    
    
    
    return answer;
}

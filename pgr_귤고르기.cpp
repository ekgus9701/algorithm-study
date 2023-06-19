#include <string>
#include <vector>
#include <map>
#include<algorithm>

using namespace std;
static bool comp(pair<int,int> &a,pair<int,int>& b){
    return a.second>b.second;
}

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    int sum=0;
    map<int,int> m;
    
    for(int i=0;i<tangerine.size();i++){
        m.insert({tangerine[i],0});
    }
    
    for(int i=0;i<tangerine.size();i++){
        m[tangerine[i]]++;
    }
    
    vector<pair<int,int>> v(m.begin(),m.end());
    
    sort(v.begin(),v.end(),comp);
    
    for(int i=0;i<v.size();i++){
        sum+=v[i].second;
        if(sum>=k){
            answer=i+1;
            break;
        }
    }
    return answer;
}

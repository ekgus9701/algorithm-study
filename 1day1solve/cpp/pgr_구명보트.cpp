#include <string>
#include <vector>
#include<iostream>
#include<algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    int sum=0;
    int i=0;
    
    sort(people.begin(),people.end());
    
    while(true){
        int last=people.size()-1;
        if(last<i){
            break;
        }
        
       // cout<<people[i]<<" "<<last<<endl;
        if(people[i]+people[last]>limit){
            answer++;
            people.pop_back();
            
        }
        
        else{
            answer++;
            i++;
            people.pop_back();
        }
        
       /* for(int i=0;i<people.size();i++){
            cout<<people[i]<<" ";
        }*/
    }
    
    return answer;
}

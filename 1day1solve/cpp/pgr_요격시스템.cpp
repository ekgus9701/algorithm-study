#include<algorithm>
#include<iostream>
#include <string>
#include <vector>

using namespace std;

bool cmp(vector<int> a, vector<int> b) {
    if(a[1]==b[1]){
        return a[0]<b[0];
    }
    return a[1]>b[1];
}

int solution(vector<vector<int>> targets) {
    int answer = 0;
    int min=100000010;
    
    
    sort(targets.begin(),targets.end(),cmp);
 
    for(int i=0;i<targets.size();i++){
        //cout<<min<<" "<<targets[i][1]<<endl;
        if(min>=targets[i][1]){
            answer++;
            
            min=targets[i][0];
            //cout<<answer<<endl;
            
        }
        else{
            if(targets[i][0]>min){
                min=targets[i][0];
            }
            
        }
        
    } 
    return answer;
}

#include <string>
#include <vector>
#include<algorithm>
#include<iostream>
#include <limits.h>

using namespace std;

int min_func(int a,int b){
    if(a<b){
        return a;
    }
    else{
        return b;
    }
}

vector<int> solution(vector<int> sequence, int k) {
    vector<int> answer;
    vector<pair<int,int>> save;
    int check;
    int min=INT_MAX;
    int a=0,b=0,c=0;
    int sum=sequence[a];
    while(true){
       
         
       if(a==sequence.size()-1&&b==sequence.size()-1){
            if(sum==k){
                //cout<<a<<" "<<b<<"push"<<endl;
                save.push_back(make_pair(a,b)); 
            }
           break;
        }

        if(sum==k){
           // cout<<a<<" "<<b<<"push"<<endl;
            save.push_back(make_pair(a,b));
            sum-=sequence[a];
            a++;
            
        }
        
        else if(sum<k){
            if(b==sequence.size()-1){
                sum-=sequence[a];
                a++;
                continue;
            }
            b++;
            sum+=sequence[b];
        }
        else{
            if(a==sequence.size()-1){
                continue;
            }
            sum-=sequence[a];
            a++;
        }

    }
    
    if(save.size()==1){
        answer.push_back(save[0].first);answer.push_back(save[0].second);
    }
    else{
        for(int i=save.size()-1;i>=0;i--){
            min=min_func((save[i].second)-(save[i].first),min);
            if(min==(save[i].second)-(save[i].first)){
                check=i;
            }
        }
        
        answer.push_back(save[check].first);answer.push_back(save[check].second);
    }
    
    
    
    return answer;
}

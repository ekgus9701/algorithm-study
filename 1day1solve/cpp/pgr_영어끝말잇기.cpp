#include <string>
#include <vector>
#include <iostream>
#include<algorithm>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer;
    vector<string> word;
    vector<int> jungbokV;
    
    int jungbok=1000000000;
    int different=1000000000;
    int temp;
    
     for(int i=0;i<words.size()-1;i++){
        if(words[i][words[i].size()-1]!=words[i+1][0]){
            different=i+1;
          // cout<<words[different]<<different<<endl;
            break;
           
        }
    
    }
    
    
    for(int i=0;i<words.size();i++){
        for(int j=i+1;j<words.size();j++){
            if(words[i]==words[j]){
                temp=j;
                //cout<<i<<" "<<j<<endl;
                jungbokV.push_back(temp);
                
              
            }
        }
        
    }
    
    sort(jungbokV.begin(),jungbokV.end());
    
   for(int i=0;i<jungbokV.size();i++){
        //cout<<jungbokV[i]<<" ";
       if(i==0){ //jungbok=jungbokV[0]하면 segmentation fault나는데 왜인지 모르겠음.. 그래서 이렇게 짬...
           jungbok=jungbokV[i];
       }
       
    }
    
    
   
    
   
    
    
    
    if(jungbok==1000000000&&different==1000000000){
        answer.push_back(0);
        answer.push_back(0);
        return answer;
    }
    
    if(jungbok<different){
        if((jungbok+1)%n==0){
            answer.push_back(n);
        }
        else{
            answer.push_back((jungbok+1)%n);
        }
        answer.push_back(jungbok/n+1);
        
        
    }
    
    else{
         if((different+1)%n==0){
            answer.push_back(n);
        }
        else{
            answer.push_back((different+1)%n);
        }
         answer.push_back(different/n+1);
       
    }

    return answer;
}

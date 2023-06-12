#include <iostream>
#include <string>
#include <vector>


using namespace std;

bool checkPossibleE(int a, int b, int c,vector<string> park, int W, int H ){
    
    for(int i=0;i<c;i++){
        a++;
        if(park[b][a]=='X'||a<0||a>=W){
            return false;
        }
    }
    return true;
    
}

bool checkPossibleW(int a, int b, int c, vector<string> park, int W, int H){
    
    for(int i=0;i<c;i++){
        a--;
        if(park[b][a]=='X'||a<0||a>=W){
            return false;
        }
    }
    return true;
    
}

bool checkPossibleN(int a, int b, int c,vector<string> park, int W, int H){
    
    for(int i=0;i<c;i++){
        b--;
        if(park[b][a]=='X'||b<0||b>=H){
            return false;
        }
    }
    return true;
    
}

bool checkPossibleS(int a, int b, int c,vector<string> park, int W, int H){
    
    for(int i=0;i<c;i++){
        b++;
        if(park[b][a]=='X'||b<0||b>=H){
            return false;
        }
    }
    return true;
    
}

vector<int> solution(vector<string> park, vector<string> routes) {
    
    vector<int> answer;
    vector<char> direction;
    vector<int> range;
   
    
    int H=park.size();
    int W=park[0].length();
    
    int a=0;
    int b=0;
    
    for(int q=0;q<park.size();q++){
        for(int w=0;w<park[0].size();w++){
            //cout<<park[i][j]<<endl;
            if(park[q][w]=='S'){
                
                a=w;
                b=q;
            }
        }
    }
    
    for(int i=0;i<routes.size();i++){
        
        string s=routes[i];
        
        direction.push_back(s[0]);
        range.push_back(s[2]-'0');
    
    }
    
    for(int j=0;j<direction.size();j++){
        bool check=false;
        if(direction[j]=='E'){
            check=checkPossibleE(a,b, range[j],park,W,H);
            if(check){
                a+=range[j];
            }
            
           // cout<<b<<a<<endl;
        }
        
        
        
        else if(direction[j]=='W'){
            check=checkPossibleW(a,b, range[j],park,W,H);
            if(check){
                a-=range[j];
            }
            
            //cout<<b<<a<<endl;
        }
        
        
        else if(direction[j]=='N'){
            check=checkPossibleN(a,b, range[j],park,W,H);
            if(check){
                b-=range[j];
            }
            
            //cout<<b<<a<<endl;
        }
        
        
        else {
           check=checkPossibleS(a,b, range[j],park,W,H);
                if(check){
                    b+=range[j];
                }
            
             //cout<<b<<a<<endl;
            }
            
            //cout<<b<<a<<endl;
 
        }
       
    
    
    answer.push_back(b);
    answer.push_back(a);
    
    
    
    
    
    return answer;
}

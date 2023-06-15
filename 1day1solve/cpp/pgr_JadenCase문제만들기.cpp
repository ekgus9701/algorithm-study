#include <string>
#include <vector>


using namespace std;

string solution(string s) {
    string answer = "";
    
   
    string word;
    vector<string> v;
    
     for(int i=0;i<s.length();i++){

         if(s[i]==' '){
             if(i==s.length()-1){
                 word+=' ';
             }
             
             v.push_back(word);
             word="";
             
         }
         else{
             word+=s[i];
             if(i==s.length()-1){
                 v.push_back(word);
             }
            // cout<<word;
         }
         
         
     }
    
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            if(!isdigit(v[i][j])&&v[i][j]!=' '){
                if(j==0){
                    v[i][j]=toupper(v[i][j]);
                }
                else{
                    v[i][j]=tolower(v[i][j]);
                }
            }
             
        }
    }
    for(int i=0;i<v.size();i++){
        answer+=v[i];
        if(i!=v.size()-1)
            answer+=" ";
    }
    
    
    
    return answer;
}

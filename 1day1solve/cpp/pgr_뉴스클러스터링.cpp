#include <string>
#include<vector>
#include<algorithm>
#include<iostream>
#include <math.h>
#include<map>

using namespace std;

int gyo_Func(vector<string> v1, vector<string> v2) {//교집합
    int cnt=0;
    for(int i=0;i<v1.size();i++)
    {
        
        for(int j=0;j<v2.size();j++)
        {
            if(v1[i]==v2[j])
            {
                v1.erase(v1.begin()+i);
                v2.erase(v2.begin()+j);
                cnt++;
                i--;
                break;
            }
        }
    }

  
    return cnt;
}

int hap_Func(vector<string> vec1, vector<string> vec2){ //합집합
    int ans;
    ans=vec1.size()+vec2.size();
   
   return ans;
}
    


int solution(string str1, string str2) {
    int answer = 0;
    
    vector<string> v1;
    vector<string> v2;
    
    string s1; string s2;
    
    //대문자로 바꾸기
    for(int i=0;i<str1.length();i++){
        if(isalpha(str1[i])){
            str1[i]=toupper(str1[i]);
        }
    }
   
    for(int i=0;i<str2.length();i++){
         if(isalpha(str2[i])){
            str2[i]=toupper(str2[i]);
        }

    }

    //벡터에 알파벳만 쌍으로 넣기
    for(int i=0;i<str1.length()-1;i++){
        s1=str1[i];
        s1+=str1[i+1];
        bool alpha=true;
        //cout<<s1<<" ";
        
        for(int j=0;j<2;j++){
            if(!isalpha(s1[j])){
                alpha=false;
            }
        }
        if(alpha)
            v1.push_back(s1);
    }
        
    
    
     for(int i=0;i<str2.length()-1;i++){
        s2=str2[i];
        s2+=str2[i+1];
        bool alpha=true;
        //cout<<s1<<" ";
        
        for(int j=0;j<2;j++){
            if(!isalpha(s2[j])){
                alpha=false;
            }
        }
        if(alpha)
            v2.push_back(s2);
        
    }
    
    //교집합, 합집합 구하기
    int gyo=gyo_Func(v1,v2);
    int hap=hap_Func(v1,v2);
    hap=hap-gyo;
    
    cout<<gyo<<" "<<hap<<endl;
    if(gyo==0&&hap==0){
        answer=65536;
        return answer;
    }
    double answer1=(double)gyo/(double)hap*65536;
    answer=trunc(answer1);

    return answer;
}

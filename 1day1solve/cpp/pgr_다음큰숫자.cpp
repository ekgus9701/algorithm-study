#include <string>
#include <vector>
#include<bitset>
#include<iostream>

using namespace std;

int solution(int n) {
    int nOne;
    int answer = 0;
    int bigOne;
    bitset<100> bs(n);
    string s = bs.to_string();
    for(int i=0;i<100;i++){
        if(s[i]=='1'){
            nOne++;
        }
    }
    n++;
    while(true){
        if(bigOne>nOne){
            break;
        }
        
        
        bitset<100> bs1(n);
        string s1 = bs1.to_string();
        for(int i=0;i<100;i++){
            if(s1[i]=='1'){
                bigOne++;
            }
        }
        //cout<<n<<" "<<bigOne<<" "<<nOne<<endl;
        if(bigOne!=nOne){
            n++;
            bigOne=0;
        }
        else{
            answer=n;
            break;
        }
        
        
    }
        
    
   
    return answer;
}

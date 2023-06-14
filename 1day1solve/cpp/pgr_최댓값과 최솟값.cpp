#include <string>
#include <vector>
#include<algorithm>
#include <sstream>
#include<iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    int ans;
    int temp=0;
    vector<int> v;
   
    // 문자열을 스트림화 //스트림은 데이터를 작은 덩어리로 나누어 처리하거나 전송할 수 있게 함
    stringstream ss(s);


    string number;
    
    // 스트림을 한 줄씩 읽어, 공백 단위로 분리한 뒤, 결과 배열에 저장
    while (getline(ss, number, ' ')){
        //cout<<number;
        temp=stoi(number);
       // cout<<temp;
        v.push_back(temp);
    }
    
    
    sort(v.begin(),v.end());
   
    
    answer=to_string(v[0])+" "+to_string(v[v.size()-1]);
    
    
    return answer;
}

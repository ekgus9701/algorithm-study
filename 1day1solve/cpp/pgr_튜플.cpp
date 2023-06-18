#include <string>
#include <vector>
#include<iostream>
#include <sstream>
#include<algorithm>
#include <map>
#define pp pair<int,int>
using namespace std;

bool cmp(const pp& a, const pp& b) {
	if (a.second == b.second) return a.first > b.first;
	return a.second > b.second;
}

vector<int> solution(string s) {
    vector<int> answer;
 
    map<int, int> m;
    vector<int> number;
    s.erase(s.begin());
    s.erase(s.end()-1);
    
    for(int i=0;i<s.length();i++){
        if(s[i]=='{'||s[i]=='}'){
            s.erase(s.begin()+i);
        }
    }
    
    //cout<<s;
   
    istringstream ss(s);//istringstream ss 변수에 string 변수 as로 초기화한다.
    string buff;
    int buff1;
    int i=0;
    while (getline(ss, buff, ','))//ss stream 변수에서 ' '(공백)까지 입력으로 받아들인다.
    {
  
        // getline으로 읽어들인 값을 buff에 저장해 출력한다.
        //cout << buff <<endl;
        buff1=stoi(buff);
        
        number.push_back(buff1);
       // cout<<buff1;
    }
   for(int i=0;i<number.size();i++){
       m.insert({number[i],0});
       
   }
     for(int i=0;i<number.size();i++){
       m[number[i]]++;
    }
   
    /* for (auto num : m) {
		cout << "key: " << num.first << " | value: " << num.second << "\n";
	}*/
    
    vector<pp> vec( m.begin(), m.end() );
	sort(vec.begin(), vec.end(), cmp);

	for (auto num : vec) {
        answer.push_back(num.first);
		//cout << "key: "<< num.first << " | value: " << num.second << "\n";
	}

    
   // sort(v.begin(),v.end(),compare1);
   // for(int i=0;i<v.size();i++){
   //     cout<<v[i].first;
   // }
    
    
    return answer;
}

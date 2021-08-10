//그래프의 정점의 간선의 개수가 6인 것이 spica
#include<iostream>
#include<map>
#include<vector>

using namespace std;

int main(){
    multimap<int, int> myMap;
    multimap<int, int>::iterator iter;
    vector<int> one;
    vector<int> two;
    vector<int> three;


    int x, y;
    for (int i = 0; i < 12;i++){
        cin >> x >> y;
        
        myMap.insert(pair<int, int>(x, y));
        myMap.insert(pair<int, int>(y, x));

    }

    for (int i = 0; i < myMap.size();i++){
        if(myMap.count(i)==1){
            one.push_back(i);
        }
        else if(myMap.count(i)==2){
            two.push_back(i);
        }
        else if(myMap.count(i)==3){
            three.push_back(i);
        }
    }
   
    for (int i:three)
    {
      
        int sum = 0;
        for (iter = myMap.lower_bound(i); iter != myMap.upper_bound(i); iter++)
        {
            sum += myMap.count(iter->second);
        }
         
        if (sum == 6)
        {
            cout << i;
            break;
        }
        }

}
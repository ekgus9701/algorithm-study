
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
    for (int i = 0; i < 12;i++){ //그래프를 만든다.
        cin >> x >> y;
        myMap.insert(pair<int, int>(x, y));
        myMap.insert(pair<int, int>(y, x));

    }

    for (int i = 0; i < myMap.size();i++){
        if(myMap.count(i)==1){ //정점과 연결된 간선의 개수가 1이면
            one.push_back(i);
        }
        else if(myMap.count(i)==2){//정점과 연결된 간선의 개수가 2이면
            two.push_back(i);
        }
        else if(myMap.count(i)==3){//정점과 연결된 간선의 개수가 3이면
            three.push_back(i);
        }
    }
   
    for (int i:three) //스피카는 스피카와 연결된 간선의 개수가 3이므로 three에서 따져준다. (예시에서 3,4,7,9)
    {
      
        int sum = 0;
        for (iter = myMap.lower_bound(i); iter != myMap.upper_bound(i); iter++) //three에 있는 정점과 연결된 정점들을 for문으로 돌려준다 
        //i가 3일때 [2,7,4], 4일때 [3,5,9],7일때 [3,6,8],9일때 [4,8,10]
        {
            sum += myMap.count(iter->second); //그 정점과 연결된 간선의 개수를 구해 sum에 더해준다.
        }
         
        if (sum == 6) //스피카는 스피카와 연결관 정점의 간선의 총 개수가 6이므로 
        {
            cout << i;
            break;
        }
        }

}
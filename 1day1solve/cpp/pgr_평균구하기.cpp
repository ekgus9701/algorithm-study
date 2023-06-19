#include <string>
#include <vector>
#include<iostream>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    for(int i=0;i<arr.size();i++){
        answer+=(double)arr[i];
        //cout<<answer<<" ";
    }
    
    answer/=arr.size();
    return answer;
}

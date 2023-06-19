#include <string>
#include <vector>
#include<limits.h>
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int min=INT_MAX;
    int check=0;
    for(int i=0;i<arr.size();i++){
        if(min>arr[i]){
            check=i;
            min=arr[i];
        }
    }
    
    arr.erase(arr.begin()+check);
    
    if(arr.empty()){
        answer.push_back(-1);
    }
    else{
        return arr;
    }
    return answer;
}

#include <vector>
#include<unordered_set>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    int size=nums.size()/2;
    
    unordered_set<int> us;
    
    for(int i=0;i<nums.size();i++){
        us.insert(nums[i]);
    }
    
    if(size<=us.size()){
        answer=size;
    }
    
    else{
        answer=us.size();
    }
    return answer;
}

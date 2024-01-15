#include <string>
#include <vector>

using namespace std;

int solution(string A, string B) {
    int answer = 0;
    int cnt=0;
    while(true){
        if(cnt>=B.size()) break;
        
        if(A==B) break;
        
        char c=B[0];
        B.erase(B.begin());
        B+=c;
        cnt++;answer++;
    }
    
    if(A!=B) return -1;
    
    return answer;
}

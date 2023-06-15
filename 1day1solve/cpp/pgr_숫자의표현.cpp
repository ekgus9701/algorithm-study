#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int sum=0;
    for(int j=0;j<=n;j++){
        for(int i=j+1;i<=n;i++){

            if(sum>n){
                sum=0;
                break;
            }
            else if(sum==n){
                answer++;
                sum=0;
                break;
            }
            sum+=i;
        }
    }
    return answer+1;
}

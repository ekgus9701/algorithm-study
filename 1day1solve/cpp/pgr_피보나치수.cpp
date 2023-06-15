#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    long long a;
    vector<long long> v;
    v.push_back(0);
    v.push_back(1);
    for(int i=2;i<=n;i++){
        a=(v[i-1]+v[i-2])%1234567;
        v.push_back(a);
    }
    answer=v[n];
    return answer;
}

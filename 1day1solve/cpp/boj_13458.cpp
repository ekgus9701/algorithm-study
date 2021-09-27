#include <iostream>
using namespace std;
#define MAX 1000001

long solution(int N, int A[], int B, int C)
{
    long long ans = 0;

    for (int i = 0; i < N;i++){
        A[i] -= B;
        ans++;
        if(A[i]>0){
            ans+=A[i] / C;
            if(A[i]%C>0){
                ans++;
            }
        }
    }
    return ans;
}

int A[MAX];
int main(void)
{
    int N = 0, B = 0, C = 0;
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> A[i];
    cin >> B >> C;

    cout << solution(N, A, B, C) << "\n";
    return 0;
}
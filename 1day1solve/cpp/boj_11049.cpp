#include<iostream>
#include<algorithm>
#include<climits>


using namespace std;

typedef struct{
    int height, width;
}mat;

 mat arr[500];
 int dp[500][500];


int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i].height >> arr[i].width;
    }
    for (int i = 1; i < n; i++) {
        for (int j = 0; j + i < n; j++) {
            dp[j][j + i] = INT_MAX;;
            for (int k = 0; k <= i - 1; k++) {
                dp[j][j + i] = min(dp[j][j + k] + dp[j + k + 1][j + i]+ arr[j].height * arr[j + k].width * arr[j + i].width, dp[j][j + i]);
            }
        }
    }
    cout << dp[0][n - 1];
    return 0;
}



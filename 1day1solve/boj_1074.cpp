#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int n, r, c, x = 0, y = 0, ans = 0;
    cin >> n >> r >> c;
    n = pow(2, n);
    while(n > 1) {
	            n /= 2;
	            // 1 왼쪽 위
	            if(r < x+n && c < y+n) {
	                //아무것도 추가하지 않는다.
	            }
	            // 2 오른쪽 위
	            else if(r < x+n && c >= y+n) {
	                ans += n * n * 1; //횟수 추가
	                y += n; //오른쪽 위로 위치 이동
	            }
	            // 3 왼쪽 아래
	            else if(r>= x+n && c < y+n) {
	                ans += n * n * 2;
	                x += n;
	            }
	            // 4 오른쪽 아래
	            else {
	                ans += n * n * 3;
	                x += n;
	                y += n;
	            }
	        }
            cout << ans;
}
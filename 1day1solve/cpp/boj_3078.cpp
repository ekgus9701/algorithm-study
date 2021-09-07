#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n, k;
    string str;
	queue<int> que[21];
	long long ans=0; //int로 하면 범위 초과라 틀리다고 나옴

	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		
		cin >> str;

		int len = str.length(); //이름의 길이
       
        while (!que[len].empty() &&  i - que[len].front()> k) { //이름의 길이에 맞는 큐가 비어있지않고 등수 차이가 k보다 크면
			que[len].pop();									 //맨 앞에있는 애 빼기
		}
		ans += que[len].size(); //큐에 들어있는 개수 더하기
		que[len].push(i);

	}

	cout << ans;
}
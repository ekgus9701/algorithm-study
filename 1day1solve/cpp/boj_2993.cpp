#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;
    int size = s.length();
  string ans(size, 'z'); //z를 이용하여 사전순으로 가장 뒤인 문자열 만듦
  
  //3개로 나눠야하는데 3 부분에 모두 문자가 할당될수있도록 for문을 이용
 
  for (int i = 0; i < size-2; ++i) { 
		for (int j = i + 1; j < size-1; ++j) {
			string cng = s;

			reverse(cng.begin(), cng.begin() + i+1);
			reverse(cng.begin()+i+1, cng.begin() + j+1);
			reverse(cng.begin()+j+1, cng.end());


			ans = min(ans, cng); //ans에 사전순으로 가장 앞인 문자열 저장
		}
	}

	cout << ans << '\n';
}
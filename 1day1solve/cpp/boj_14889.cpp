#include<iostream>
#include<math.h>
using namespace std;

int arr[21][21];
bool visited[22];
int N;
int ans = 1000000000; 

void DFS(int x, int pos)
{
	if (x == N / 2) // 두팀으로 나뉘어졌다면
	{
		int start, link;
		start = 0;
		link = 0;

		for (int i = 1; i <= N; i++)
		{
			for (int j = 1; j <= N; j++)
			{
				if (visited[i] == true && visited[j] == true) start += arr[i][j]; //visited가 true인 애들의 합 구하기
				if (visited[i] == false && visited[j] == false) link += arr[i][j]; //false인 애들의 합구하기
			}
		}

		int temp = abs(start - link); //절대값
		if (ans > temp) ans = temp; //차이 덜 나는 애를 ans에 대입

		return;
	}

	for (int i = pos; i < N; i++) //두 팀을 나누는 코드, for문을 이용해 true와 false로 나눠 두팀으로 나눠준다.
	{
		visited[i] = true;
		DFS(x + 1, i + 1);
		visited[i] = false;
	}

}

int main()
{
     ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			cin >> arr[i][j];
		}
	}

	DFS(0, 1); // 카운트 0회부터 숫자는 1부터 시작

	cout << ans;
}
#include <iostream>
#include <cmath>

using namespace std;

int solution(int n, int r, int c)
{
	int ans = 0;
	int x = 1 << n - 1;
	int y = x;

	while (n-- > 0)
	{
		int temp = 1 << n - 1;
		int skip = 1 << 2 * n;

		if (c < x && r < y)
		{
			x -= temp;
			y -= temp;
		}
		else if (c >= x && r < y)
		{
			x += temp;
			y -= temp;
			ans += skip;
		}
		else if (c < x && r >= y)
		{
			x -= temp;
			y += temp;
			ans += skip * 2;
		}
		else
		{
			x += temp;
			y += temp;
			ans += skip * 3;
		}
	}
	return ans;
}

int main()
{
	int n, r, c;
	cin >> n >> r >> c;

	cout << solution(n, r, c);
}
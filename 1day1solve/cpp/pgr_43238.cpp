#include <string>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

long long solution(int n, vector<int> times)
{
    long long answer = LLONG_MAX;
    long long start = 1;
    long long temp, mid;
    long long end = (long long)n * (long long)times[times.size() - 1];

    while (start <= end)
    {
        mid = (start + end) / 2;
        temp = 0;

        for (int i = 0; i < times.size(); i++)
        {
            temp += mid / times[i];
        }
        if (temp >= n)
        {
            answer = min(answer, mid);
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
}
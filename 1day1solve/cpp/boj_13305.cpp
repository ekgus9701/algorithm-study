#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
long long solution(int cities, vector<int> distance, vector<int> price)
{
    long long ans = 0;
    long long min_v = price[0];
    ans += distance[0] * min_v;
    for (int i = 1; i < cities - 1; i++)
    {

        min_v = min((long long)price[i], min_v);
        ans += distance[i] * min_v;
    }

    //
    return ans;
}

int main()
{
    int cities;
    vector<int> distance;
    vector<int> price;

    cin >> cities;
    for (int i = 0; i < cities - 1; i++)
    {
        int k;
        cin >> k;
        distance.push_back(k);
    }
    for (int i = 0; i < cities; i++)
    {
        int k;
        cin >> k;
        price.push_back(k);
    }

    cout << solution(cities, distance, price);
}
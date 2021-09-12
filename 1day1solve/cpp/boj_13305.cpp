#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    vector<int> road;
    vector<int> price;

    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        int k;
        cin >> k;
        road.push_back(k);
    }
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        price.push_back(k);
    }
    long long cost = 0;
    long long min_cost = price[0];
    for (int i = 0; i < n - 1; i++)
    {
        if (price[i] < min_cost)
        {
            min_cost = price[i];
        }
        cost += min_cost * road[i];
    }
    cout << cost;
}
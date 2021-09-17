#include <iostream>
#include <vector>

using namespace std;
long long solution(int cities, vector<int> distance, vector<int> price)
{
   
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
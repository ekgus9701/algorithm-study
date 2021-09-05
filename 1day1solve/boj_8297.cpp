#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    int n, t, k;
    cin >> n >> t;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        cin >> k;
        v.push_back(k);
    }
    int ans = 0, i = 0;
    int count = 0;
    int max_index = max_element(v.begin(), v.end()) - v.begin();
    if (i == 0)
    {
        ans += v[i];
        i++;
    }

    while (true)
    {
        if (count == t)
            break;
        if (i == 0)
        {
            ans += v[i];
            i++;
        }
        else if (i == v.size() - 1)
        {
            ans += v[i];
            i--;
        }
        else if (i < max_index)
        {
            ans += v[i];
            i++;
        }
        else if (i > max_index)
        {
            ans += v[i];
            i--;
        }
        else if (i == max_index)
        {
            if (v[i - 1] > v[i + 1])
            {
                ans += v[i];
                i--;
            }
            else if (v[i - 1] < v[i + 1])
            {
                ans += v[i];
                i++;
            }
            cout << ans << "\n";
        }

        count++;
    }
    cout << ans;
}
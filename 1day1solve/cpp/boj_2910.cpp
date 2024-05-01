#include <algorithm>
#include <iostream>
#include <map>

using namespace std;

map<int, pair<int, int>> m;

bool cmp(int a, int b) {
  if (m[a].first == m[b].first) {
    return m[a].second < m[b].second;
  }
  return m[a].first > m[b].first;
}

int main() {
  int n, c, a;

  cin >> n >> c;

  vector<int> v;

  for (int i = 0; i < n; i++) {
    cin >> a;
    v.push_back(a);
    m[a].first++;
    if (m[a].first == 1) {
      m[a].second = i;
    }
  }

  sort(v.begin(), v.end(), cmp);

  for (int i = 0; i < n; i++) {
    cout << v[i] << " ";
  }
}

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    int a;

    vector<int> v;
    cin>>n;

    for (int i = 0; i < n; i++) {
        cin>>a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    for (int i = 0; i < n; i++) {
        cout<<v[i]<<" ";
    }
    return 0;

}
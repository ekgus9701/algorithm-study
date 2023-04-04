
#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    int n,o;
    vector <int> v;
    cin>>n;
    while(n!=0){
        o=n%10;
        v.push_back(o);
        n/=10;
    }
    sort(v.begin(),v.end(),greater<>());
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
    
}


#include <iostream>
#include <queue>
#include<algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(NULL);
    cin.tie(0); cout.tie(0);
    int n,f,a;
    queue<int> q;
    cin>>n;
    for(int i=1;i<=n;i++){
        q.push(i);
    }
    while(true){
        if(q.size()==1){
            break;
        }
        else{
            a=q.front();
            cout<<a<<" ";
            q.pop();
            f=q.front();
            q.push(f);
            q.pop();
        }
    }
    
    cout<<q.front();
}

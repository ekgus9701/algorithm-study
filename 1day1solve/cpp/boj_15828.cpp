
#include <iostream>
#include<queue>
#include<algorithm>

using namespace std;

int main(){
    int n,a;
    queue<int> que;
    cin>>n;
    while(true){
        cin>>a;
        if(a==-1){
            break;
        }
        if(a==0){
            que.pop();
        }
        else if(que.size()<n){
            que.push(a);
        }
        
    }
    
    if(que.empty()){
        cout<<"empty";
    }
    else{
        while (!que.empty()) {
            cout << que.front() << " ";
            que.pop();
        }
    }
}

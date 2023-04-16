//
//  boj_2217.cpp
//  Algorithm
//
//  Created by 한다현 on 2023/04/15.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v;

int solve(){
    int max=0,temp=0;
    sort(v.begin(),v.end());
    
    for(int i=0;i<v.size();i++){
        temp=v[i]*(v.size()-i);
        if(max<temp){
            max=temp;
        }
    }
    
    return max;
}


int main(){
    int n,w;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>w;
        v.push_back(w);
        
    }
    
    cout<<solve();
}

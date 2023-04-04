//
//  boj_2751.cpp
//  Algorithms
//
//  Created by 한다현 on 2023/03/15.
//

#include <iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    int n=0;
    int a;
    vector<int> v;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
        
    }
    sort(v.begin(),v.end());
    
    for(int k=0;k<n;k++){
        cout<<v[k]<<"\n";
    }
    
}

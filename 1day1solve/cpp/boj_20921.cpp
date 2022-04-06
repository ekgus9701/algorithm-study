#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int n,q;


int main(){
    cin>>n;
    vector<int> t;
    int day=1;
    long long maxd=0;

    for(int i=0;i<n;i++){
        cin>>q;
        t.push_back(q);

    }

    sort(t.begin(),t.end());

    if(n==1){
        cout<<day+t[0]+1;
        return 0;
    }

    maxd=day+t[t.size()-1];
    for(int i=t.size()-2;i>=0;i--){
        day++;
       
        if(maxd>=day+t[i]){
            maxd=maxd;
        }

        else{
            maxd=day+t[i];
        }
      
    }

    cout<<maxd+1;

    return 0;
    


}
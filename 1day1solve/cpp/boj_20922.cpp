#include<iostream>
#include<vector>
#include<algorithm>
#include<map>

using namespace std;

int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,k;

    cin>>n>>k;

    vector<int> v;
    map<int,int> um;

    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }

    int cnt=1;
    int st=0;
    int end=st+1;
  
    um[v[st]]++;
    um[v[end]]++;

    int maxNum=-1;


    while(true){
        // cout<<v[st]<<" "<<v[end]<<endl;

        if(end>=n ||st>=n) {
            maxNum=max(end-st,maxNum);
            break;
        }
       
        if(um[v[end]]>k){
            // cout<<"aa\n";
            maxNum=max(end-st,maxNum);
            um[v[st]]--;
            st=st+1;
            
        }
        else{
            end++;
            um[v[end]]++;

        }
    }

    cout<<maxNum;

}
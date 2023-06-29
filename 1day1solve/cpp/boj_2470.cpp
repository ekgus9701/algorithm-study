#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdlib>
using namespace std;

int main(){
    vector<int> v;
    vector<int> ans;
    int n,a,close;
    cin>>n;
    int left=0,right=n-1;
    
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    
    sort(v.begin(),v.end());
    close=v[left]+v[right];
    close=abs(close);
    ans.push_back(v[left]);
    ans.push_back(v[right]);
    while(left<right){
        int sum=v[left]+v[right];
        int sum1=abs(sum);
        //cout<<close<<" "<<sum1<<endl;
        if(close>sum1){
            close=sum1;
            ans.pop_back();
            ans.pop_back();
            ans.push_back(v[left]);
            ans.push_back(v[right]);
        }
        
        if(sum<0){
            left++;
        }
        else{
            right--;
        }
    }
    
    cout<<ans[0]<<" "<<ans[1];
    
}

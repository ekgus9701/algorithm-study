#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n,num,k,p=0;

    cin>>n;
    int v[n];
    
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
   
    cin>>k;
   
    num=n/k;
    
    vector<int> arr;
  

    for(int i=0;i<k;i++){
        for(int j=0;j<num;j++){
            arr.push_back(v[p]);
            p++;
        }
        sort(arr.begin(),arr.end());
        for(int l=0;l<arr.size();l++){
            cout<<arr[l]<<" ";
        }
        
        arr.clear();
    }
    

}
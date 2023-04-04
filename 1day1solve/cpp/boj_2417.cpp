#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    unsigned long long n,min=LLONG_MAX;
    unsigned long long left=0,right,mid;
    cin>>n;
    right=n;
    while(left<=right){
        mid=(right+left)/2;
        if(mid*mid<n){
            left=mid+1;
        }
        else if(mid*mid==n){
            cout<<mid;
            return 0;
        }
        else{
            min=mid;
            right=mid-1;
            
        }
        //cout<<left<<mid<<right<<"\n";
        
    }
    cout<<min;
}

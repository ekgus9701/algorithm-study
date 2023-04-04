//
//  boj_2512.cpp
//  Algorithms
//
//  Created by 한다현 on 2023/04/01.
//

#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n,m,a;
    int begin,mid=0,end,cal,ansbefore=0,midbefore=0,cnt=0;
    vector<int> v;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    cin>>m;
    cal=m;
    begin=v[0];
    end=v[v.size()-1];
    
    if(m<=begin*v.size()){
        cout<<m/v.size();
        
    }
    else if(m>=end*v.size()){
        cout<<end;
        
    }
    else{
        mid=(end+begin)/2;
        for(int j=0;j<n;j++){
            
            if(v[j]<mid){
                cal-=v[j];
            }
            else{
                cnt++;
            }
        }
        cout<<cal/cnt;
        
        
        while(true){
            if(begin>end){
                cout<<mid;
                break;
            }
            else if(begin==end){
                cout<<begin;
                break;
            }
            mid=(end+begin)/2;
            for(int j=0;j<n;j++){
                
                if(v[j]<mid){
                    cal-=v[j];
                }
                else{
                    cal-=mid;
                }
                
            }
            /*if(ans<0&&ansbefore>0){
                cout<<midbefore;
                break;
            }*/
            cout<<cal<<" "<<mid<<endl;
           /* ansbefore=ans;
            midbefore=mid;*/
            if(cal==0){
                cout<<mid;
                break;
            }
            else if(cal<0){
                end=mid-1;
                
            }
            else{
                begin=mid+1;
            }
            cal=m;
        }
        
    }
    
    
}

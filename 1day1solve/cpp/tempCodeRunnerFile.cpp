#include<iostream>
#include<string>
#include<cmath>
#include<vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int alphabet[26]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26};
    long long po=1;
    
    
   
    
    long long num=0,num1=0;
    string s,p;
    cin>>s>>p;
    if(s==p){
        cout<<1;
            return 0;
    }
    int leng= s.length();
    int x=27;
    long long ans=0;
    long long cnt[leng];
    long long cnt1[leng];
    //cout<<"cnt"<<endl;
    
    for(int i=leng-1;i>=0;i--){
        cnt[i]=alphabet[s[i]-97]*po;
        po=po*x;
        //cout<<cnt[i]<<endl;
    }

    po=1;
   // cout<<"cnt1"<<endl;
    for(int i=p.length()-1;i>=0;i--){
        cnt1[i]=alphabet[p[i]-97]*po;
        po=po*x;
        //cout<<cnt1[i]<<endl;
        
    }

    for(int i=0;i<leng-p.length();i++){
        num=0;
        num1=0;
        for(int j=i;j<p.length()+i;j++){
            num+=cnt[j];
            //cout<<"num: "<<num<<endl;
        }
        
        for(int j=0;j<p.length();j++){
            num1+=cnt1[j];
            //cout<<"num1: "<<num1<<endl;
        }

    for(int j=1;j<leng-p.length()+1;j++){
        num1=num1*x;
        if(num1==num){
            cout<<1;
            return 0;
        }
    }

        
    }
    cout<<0;
    
}
#include<iostream>
#include<string>
#include<cmath>
#include<vector>

using namespace std;
long long sHash[1000000];
int alphabet[26]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26};
long long pHash,Hashs;
int x=27;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long po=1;
    string s,p;
    cin>>s>>p;
    if(s==p){
        cout<<1;
        return 0;
    }
    if(s.length()<p.length()){
        cout<<0;
        return 0;
    }
   
    for(int i=0;i<=s.length();i++){
        
            sHash[i]+=alphabet[s[i]-97]*po;
            cout<<alphabet[s[i]-97]*po<<" "<<po<<endl;
            po=po*x;  
          
        
    }
    for(int j=p.length()-1;j>=0;j--){
        pHash+=po*alphabet[p[j]-97];
        po=po*x;
        cout<<pHash<<" ";
    }
    for(int k=s.length()-p.length();k>=0;k--){
        Hashs=sHash[k]+sHash[k+1]+sHash[k+2];
         po=1;
    
    
        for(int j=1;j<s.length()-p.length()+1;j++){
            pHash*=x;
            if(Hashs==pHash){
                    cout<<1;
                    return 0;
            }
        }
    }   
   
    


    cout<<0;
    
}
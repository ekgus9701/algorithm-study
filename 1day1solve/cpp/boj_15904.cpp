#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

    string s;
    int size;
    int idx,idx2,idx3,idx4;

    getline(cin,s);
    size=s.length();
    if(s.find("U")==string::npos){
        cout<<"I hate UCPC";
        return 0;
    }
    if(s.find("C")==string::npos){
        cout<<"I hate UCPC";
        return 0;
    }
    if(s.find("P")==string::npos){
        cout<<"I hate UCPC";
        return 0;
    }
   for(int i=0;i<size;i++){
       //cout<<s[i]<<endl;
       if(s[i]=='U'){
           idx=i;
           break;
       }
       else if(i==size-1){
           cout<<"I hate UCPC"; return 0;
       }
   }
   for(int i=idx+1;i<size;i++){
       if(s[i]=='C'){
           idx2=i;
           break;
       }
       else if(i==size-1){
           cout<<"I hate UCPC";return 0;
       }
   }
   for(int i=idx2+1;i<size;i++){
       if(s[i]=='P'){
           idx3=i;break;
       }
       else if(i==size-1){
           cout<<"I hate UCPC";return 0;
       }
   }
   for(int i=idx3+1;i<size;i++){
       if(s[i]=='C'){
           cout<<"I love UCPC";
           return 0;
       }
   }

    cout<<"I hate UCPC";
    return 0;

}
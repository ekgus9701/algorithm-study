#include <iostream>
#include <vector>
#include <string>
#include<algorithm>

using namespace std;

int main(){
    int n,k;
    long long temp;
    string num;
    cin>>n>>k>>temp;
    num=to_string(temp);

    long long i=0;
   
    while(1){
        if(k<=0){
            break; 
        }
        if(i>=num.length()) break;
     
        if(num.length()>=2){
            if(num[i]<num[i+1]){
                num.erase(i,1);
                i=0;
                k--;
                
            } 
            else{
                i++;
            }
        }   
    }

    if(k<=0) {
        cout<<stoll(num);
        return 0;
    }

    string copyNum;
    copyNum=num;
    sort(copyNum.begin(),copyNum.end());
     for(int j=0;j<k;j++){ 
         for(int p=0;p<num.length();p++){
            if(copyNum[j]==num[p]){
           
                num.erase(p,1);
                break;
                
            }
        }

    }

    if(num.length()==0) cout<<0;

    else cout<<stoll(num);

}
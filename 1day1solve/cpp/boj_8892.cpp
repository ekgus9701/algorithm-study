#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    int t,check=0;
    int num;
    cin>>t;
    string s,add1,temp1,add2,temp2;
    vector<string> str;

    if(t==0){
        cout<<0;
    }
    for(int i=0;i<t;i++){
        cin>>num;
        str.clear();
       check=0;
       
        for(int j=0;j<num;j++){
            cin>>s;
            str.push_back(s);
        }
         if(num==1){
            cout<<str[0];
            continue;
        }
        

        for(int p=0;p<num;p++){
            if(check==1){
                break;
            }
            for(int l=0;l<num;l++){
               
                if(p==l){
                    continue;
                }

                add1=str[p]+str[l];
                temp1=add1;
                reverse(add1.begin(),add1.end());
                if(add1==temp1){
                    cout<<temp1<<"\n";
                    check=1;
                    break;
                }

                
            }
            

        }
        if(check==0)
            cout<<0;
    }
}
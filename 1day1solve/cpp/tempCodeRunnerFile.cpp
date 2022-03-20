#include<iostream>
using namespace std;

int main(){
    
   
    int n,check=0;
    string s,s1;

    
    cin>>n;
    
    
    for(int i=0;i<n;i++){
        
         cin>>s>>s1;

        for(int j=0;j<s.length();j++){
            for(int k=0;k<s1.length();k++){
                if(s[j]==s1[k]){
                    check++;
                    break;
                }
            }
        
            if(s.length()==check){
                cout<<s<<" & "<<s1<<" are anagrams."<<"\n";
                
            }

            else{
                cout<<s<<" & "<<s1<<" are NOT anagrams."<<"\n";
            }

           
        }

        
    }
        

}
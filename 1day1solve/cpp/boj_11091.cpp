#include<iostream>
using namespace std;

int main(){
    char alphabet[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int check[26]={0};
    int pan;
    string s;
    string temp="";
    int n;
    cin>>n;
    cin.ignore();
    
    for(int i=0;i<n;i++){
        cin.clear();
        s="";
        temp="";
        pan=0;
        for(int i=0;i<26;i++){
            check[i]=0;
        }
       
        getline(cin,s);
        for (int i = 0; i < s.size(); i++) {
            if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
                temp = temp + s[i];
            }
        }
        s = temp;
        
        for(int k=0;k<s.length();k++){
            if('A'<=s[k] && s[k]<='Z'){
                s[k]+=32;
            }
           
        }
        
         
       for(int k=0;k<s.length();k++){
            for(int j=0;j<26;j++){
                

                if(s[k]==alphabet[j]){
                    
                    check[j]++;
                }
            }
        }
        
        for(int j=0;j<26;j++){
            if(check[j]==0){
                cout<<"missing ";

                break;
            }
        }
        for(int j=0;j<26;j++){
            if(check[j]==0){
                cout<<alphabet[j];
                pan=1;
            }
            if(j==25&&pan==1){
                cout<<"\n";
            }
        }
        if(pan!=1){
            cout<<"pangram"<<"\n";
        }

    }

}

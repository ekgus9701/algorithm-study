#include<iostream>

using namespace std;

int main(){
    string s;
    int check=0;
    while(true){
        cin>>s;
        check=0;
        if(s=="#")
            return 0;
        else{
            for(int i=s.length()-1;i>=0;i--){
                if(s[i]!='b'&&s[i]!='d'&&s[i]!='p'&&s[i]!='q'&&s[i]!='i'&&s[i]!='o'&&s[i]!='v'&&s[i]!='w'&&s[i]!='x'){
                    cout<<"INVALID";
                    check=1;
                    break;
                }
            }

            if(check==0){
                 for(int i=s.length()-1;i>=0;i--){
                    if(s[i]=='b'){
                        cout<<'d';
                    }
                    else if(s[i]=='d'){
                        cout<<'b';
                    }
                    else if(s[i]=='p'){
                        cout<<'q';
                    }
                    else if(s[i]=='q'){
                        cout<<'p';
                    }
                    else{
                        cout<<s[i];
                    }
                }
                
            }
            
            cout<<"\n";
        }

    }
}
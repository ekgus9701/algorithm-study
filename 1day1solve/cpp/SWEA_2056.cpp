#include <iostream>
#include <algorithm>
#include<string>

using namespace std;

int main(int argc, char** argv)
{
    int test_case;
    int T;
    string s,month,day;
    int m,d;
    cin>>T;
   
    for(test_case = 1; test_case <= T; ++test_case)
    {
        cin>>s;
        //cout<<s[4]<<" "<<s[5]<<"\n";
        month=s[4];
        month+=s[5];
        //cout<<month<<"\n";
       m=stoi(month);
        day=s[6];
        day+=s[7];
        d=stoi(day);
        
        if(m>12||m<=0){
            cout<<"#"<<test_case<<" "<<-1<<"\n";
            continue;
        }
        
        switch(m){
            case 1:
                if(d>0&&d<32){
                    cout<<"#"<<test_case<<" "<<s[0]<<s[1]<<s[2]<<s[3]<<'/'<<s[4]<<s[5]<<'/'<<s[6]<<s[7]<<"\n";
                    break;
                }
                else{
                    cout<<"#"<<test_case<<" "<<-1<<"\n";break;
                }
            case 2:
                if(d>0&&d<29){
                    cout<<"#"<<test_case<<" "<<s[0]<<s[1]<<s[2]<<s[3]<<'/'<<s[4]<<s[5]<<'/'<<s[6]<<s[7]<<"\n";break;
                }
                else{
                    cout<<"#"<<test_case<<" "<<-1<<"\n";break;
                }
            case 3:
                if(d>0&&d<32){
                    cout<<"#"<<test_case<<" "<<s[0]<<s[1]<<s[2]<<s[3]<<'/'<<s[4]<<s[5]<<'/'<<s[6]<<s[7]<<"\n";break;
                }
                else{
                    cout<<"#"<<test_case<<" "<<-1<<"\n";break;
                }
            case 4:
                if(d>0&&d<31){
                    cout<<"#"<<test_case<<" "<<s[0]<<s[1]<<s[2]<<s[3]<<'/'<<s[4]<<s[5]<<'/'<<s[6]<<s[7]<<"\n";break;
                }
                else{
                    cout<<"#"<<test_case<<" "<<-1<<"\n";break;
                }
            case 5:
                if(d>0&&d<32){
                    cout<<"#"<<test_case<<" "<<s[0]<<s[1]<<s[2]<<s[3]<<'/'<<s[4]<<s[5]<<'/'<<s[6]<<s[7]<<"\n";break;
                }
                else{
                    cout<<"#"<<test_case<<" "<<-1<<"\n";break;
                }
            case 6:
                if(d>0&&d<31){
                    cout<<"#"<<test_case<<" "<<s[0]<<s[1]<<s[2]<<s[3]<<'/'<<s[4]<<s[5]<<'/'<<s[6]<<s[7]<<"\n";break;
                }
                else{
                    cout<<"#"<<test_case<<" "<<-1<<"\n";break;
                }
            case 7:
                if(d>0&&d<32){
                    cout<<"#"<<test_case<<" "<<s[0]<<s[1]<<s[2]<<s[3]<<'/'<<s[4]<<s[5]<<'/'<<s[6]<<s[7]<<"\n";break;
                }
                else{
                    cout<<"#"<<test_case<<" "<<-1<<"\n";break;
                }
            case 8:
                if(d>0&&d<32){
                    cout<<"#"<<test_case<<" "<<s[0]<<s[1]<<s[2]<<s[3]<<'/'<<s[4]<<s[5]<<'/'<<s[6]<<s[7]<<"\n";break;
                }
                else{
                    cout<<"#"<<test_case<<" "<<-1<<"\n";break;
                }
            case 9:
                if(d>0&&d<31){
                    cout<<"#"<<test_case<<" "<<s[0]<<s[1]<<s[2]<<s[3]<<'/'<<s[4]<<s[5]<<'/'<<s[6]<<s[7]<<"\n";break;
                }
                else{
                    cout<<"#"<<test_case<<" "<<-1<<"\n";break;
                }
            case 10:
                if(d>0&&d<32){
                    cout<<"#"<<test_case<<" "<<s[0]<<s[1]<<s[2]<<s[3]<<'/'<<s[4]<<s[5]<<'/'<<s[6]<<s[7]<<"\n";break;
                }
                else{
                    cout<<"#"<<test_case<<" "<<-1<<"\n";break;
                }
            case 11:
                if(d>0&&d<30){
                    cout<<"#"<<test_case<<" "<<s[0]<<s[1]<<s[2]<<s[3]<<'/'<<s[4]<<s[5]<<'/'<<s[6]<<s[7]<<"\n";break;
                }
                else{
                    cout<<"#"<<test_case<<" "<<-1<<"\n";break;
                }
            case 12:
                if(d>0&&d<32){
                    cout<<"#"<<test_case<<" "<<s[0]<<s[1]<<s[2]<<s[3]<<'/'<<s[4]<<s[5]<<'/'<<s[6]<<s[7]<<"\n";break;
                }
                else{
                    cout<<"#"<<test_case<<" "<<-1<<"\n";break;
                }
                
            
         
        }

    }
    return 0;//정상종료시 반드시 0을 리턴해야합니다.
}

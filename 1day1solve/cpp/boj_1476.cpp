#include<iostream>


using namespace std;

int main(){
    int e,s,m,e1,s1,m1,e2,s2,m2;
    cin>>e>>s>>m;
    int earth=0;
    e1=e%15;
    s1=s%28;
    m1=m%19;
    if(e1==0){
        e1=15;
    }
    if(s1==0){
        s1=28;
    }
    if(m1==0){
        m1=19;
    }
    
    while(1){
        earth++;
        e2=earth%15;
        s2=earth%28;
        m2=earth%19;
        if(e2==0){
            e2=15;
        }
        if(s2==0){
            s2=28;
        }
        if(m2==0){
            m2=19;
        }
        
        if(e1==e2&&s1==s2&&m1==m2){
            cout<<earth;
            break;
        }
        
    }
    
    return 0;
}

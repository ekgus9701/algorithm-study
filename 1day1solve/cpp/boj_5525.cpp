#include<iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);

    long long n;
    long long m,count=0;
    string s;
    string IOI="IOI";
    
    
    cin>>n>>m>>s;
    for(long long i=1;i<n;i++){
        IOI=IOI+"OI";
    }

    for(long long i=0; i<s.length(); i++){
		if(s.find(IOI) == -1){
			break;
		}
        else if(s.find(IOI,i)<=i){
			count+= 1;
		}
	}
	cout<<count;
    
}
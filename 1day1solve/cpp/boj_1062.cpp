#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int ans=0;
int n,k;
string s;
vector<string> v;
bool arr[26]={false}; //알파벳

void dfs(int index, int count){ //index는 시작점, count는 현재 뽑은 원소의 개수를 나타낸다
    
    bool flag;
    int temp=0;
    if(count==k){
        for(int p=0;p<v.size();p++){
            flag=true;
            string s2=v[p];
            for(int l=0;l<s2.length();l++){
                if(arr[s2[l]-'a']==false){
                    flag=false;
                    break;
                }
            }
            if(flag==true){
                temp++;
                
            }
        }
        ans=max(ans,temp);
    }
    
    else{
        for(int i=index;i<26;i++){
            if(arr[i]==true) continue;
            arr[i]=true;
            dfs(i,count+1);
            arr[i]=false;
        }
    }
    
}

void solve(){
 
    arr['a'-'a']=true;
    arr['n'-'a']=true;
    arr['t'-'a']=true;
    arr['i'-'a']=true;
    arr['c'-'a']=true;
    
    k=k-5;
    dfs(0,0);
    
}

int main(){
    
    
    cin>>n>>k;
    if(k<5){
        cout<<0;
        return 0;
    }
    else if(k==26){
        cout<<n;
    }
    else{
        for(int i=0;i<n;i++){
            cin>>s;
            v.push_back(s);
        }
        solve();
        cout<<ans;
    }
    
    
    
}

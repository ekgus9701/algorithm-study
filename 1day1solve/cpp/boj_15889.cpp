#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n,num,check;
    vector<int> v;
    vector<int> v2;
    cin>>n;

    if(n==1){
        cout<<"�Ǻ����, �ߴ������ ã���ʴϴ�";
        return 0;
    }
    
    for(int i=0;i<n;i++){
        cin>>num;
        v.push_back(num);
        
    }
    
     for(int i=0;i<n-1;i++){
        cin>>num;
        v2.push_back(num);
        
    }

    for(int i=0;i<n-1;i++){
        
        if(v[i]==v[i+1]){
            if(v2[i]>v2[i+1]){
                v2[i+1]=v2[i];
            }
            else{
                v2[i]=v2[i+1];
            }
        }
    }
    for(int i=0;i<n-1;i++){
       cout<<v[i]<<" "<<v2[i]<<"\n";
    }
    for(int k=0;k<n-1;k++){
        if(v[k+1]-v[k]>v2[k]){
            cout<<"���� �� ���� �ʾ��� �� ����";
            break;
        }
        if(k==n-2){
            cout<<"�Ǻ����, �ߴ������ ã���ʴϴ�";
        }
    }

    
}
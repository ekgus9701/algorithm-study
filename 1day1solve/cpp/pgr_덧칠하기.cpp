#include <string>
#include <vector>
#include<iostream>

using namespace std;

int solution(int n, int m, vector<int> section) {
    
    int answer = 0;
    int arr[100010];
    
    fill_n(arr, 100010, 1);
    for(int i=0;i<section.size();i++){
        //cout<<section[i]<<endl;
        arr[section[i]]=0;
        
    }

    for(int i=1;i<=n;i++){
        if(arr[i]==0){
            
            answer+=1;
            
            for(int j=0;j<m;j++){
                if(j-1+i>n+1){
                    return answer;
                }
                arr[i+j]=1;
            }
        }
    }

    
    return answer;
}

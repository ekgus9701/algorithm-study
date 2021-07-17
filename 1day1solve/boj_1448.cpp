#include<iostream>
#include<algorithm>

using namespace std;

bool compare(int i,int j){
    return j < i;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,f=0,s=1,t=2;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }

    sort(arr,arr+n,compare);
    while(true){
        if(arr[f]<arr[s]+arr[t]){
            cout << arr[f] + arr[s] + arr[t] << "\n";
            break;
        }
        f++,s++,t++;

        if(f>=n-2){
            s++;
            if(s>=n-1){
                t++;
                
                    if(t>=n){
                        cout << -1;
                    break;
                    }
                }
            }
        }
    

}
#include <iostream>

#define MAX 4242 
using namespace std;
int n, k, num=0;
int A[MAX], B[MAX]; 

int main() {
   
    cin>>n>>k;

    
    for (int i=0; i<n; i++)
        A[i] = i + 1;

    
    for (int i=n-1; i>0; i--) {
        if (k >= i) {
            k -= i;
            A[i] = -1;
            B[num++] = i+1;
        }
    }

   
    for (int i=0; i<n; i++) {
        if (A[i] >= 0)
            B[num++] = A[i];
        cout<<B[i]<<" ";
    }
    

    return 0;
}
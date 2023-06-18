#include <string>
#include <vector>

using namespace std;


int gcd(int a, int b)
{
	int c;
	while (b != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}

int lcm(int a, int b){
	return a*b / gcd(a, b);
}


int solution(vector<int> arr) {
    int answer = 0;
    int a=arr[0];
    for(int i=0;i<arr.size()-1;i++){
        a=lcm(a,arr[i+1]);
    }
    
    return a;
}

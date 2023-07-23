#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer = "";
    for(int i=0;i<phone_number.length()-4;i++){
        answer+="*";
    }
    for(int i=0;i<4;i++){
        answer+=phone_number[phone_number.length()-4+i];
    }
    
    
    return answer;
}

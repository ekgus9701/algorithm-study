#include <string>
#include <vector>
#include <sstream>
 
using namespace std;
 
int link[2501];
string value[2501];
 
int flatPos(int r, int c) {
    return (r - 1) * 50 + c;
}
 
vector<string> solution(vector<string> commands) {
    vector<string> answer;
 
    //초기화
    for (int i = 1; i <= 2500; i++) {
        link[i] = i; //부모랑 이어주는 링크
        value[i] = "EMPTY";
    }
 
    for (string &command : commands) {
        vector<string> v;
        stringstream ss(command);
        string token;
        while (ss >> token) v.push_back(token);
 
        if (v[0] == "UPDATE") {
            if (v.size() == 4) { //r,c의 부모를 찾아 value 변경
                int pos = flatPos(stoi(v[1]), stoi(v[2]));
                string val = v[3];
                int parent = link[pos];
                value[parent] = val;
            }
            else { 
                string val1 = v[1], val2 = v[2]; 
                for (int i = 1; i <= 2500; i++) { //다 돌면서 val1인 애들 val2로 변경
                    if (value[i] == val1) value[i] = val2;
                }
            }
        }
        else if (v[0] == "MERGE") { 
            int pos1 = flatPos(stoi(v[1]), stoi(v[2]));
            int pos2 = flatPos(stoi(v[3]), stoi(v[4]));
            int parent1 = link[pos1], parent2 = link[pos2];
            if (parent1 != parent2) { //두 셀의 부모가 다르다면
                for (int i = 1; i <= 2500; i++) { //r2 c2의 부모를 r1 c1으로 바꿈
                    if (link[i] == parent2) link[i] = parent1;
                }
                string val1 = value[parent1], val2 = value[parent2];
                if (val1 == "EMPTY" && val2 != "EMPTY") { //r1 c1의 부모는 empty인데 r2c2는 아니라면
                    value[parent1] = value[parent2];
                }
                else { //그 반대라면
                    value[parent2] = value[parent1];
                }
            }
        }
        else if (v[0] == "UNMERGE") { 
            int pos = flatPos(stoi(v[1]), stoi(v[2]));
            int parent = link[pos];
            string val = value[parent];
            for (int i = 1; i <= 2500; i++) {
                if (link[i] == parent) {
                    link[i] = i; //부모랑 연결해놨던거 끊기
                    value[i] = "EMPTY"; //value도 empty로 변환
                }
            }
            value[pos] = val; //값을 가지고 있었을 경우 r,c 위치의 셀이 그 값을 가짐
        }
        else { 
            int pos = flatPos(stoi(v[1]), stoi(v[2]));
            int parent = link[pos];
            answer.push_back(value[parent]); //부모 value print
        }
    }
 
    return answer;
}

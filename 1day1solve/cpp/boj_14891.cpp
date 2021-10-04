#include <iostream>
#include <string>
#include <vector>

using namespace std;
vector<vector<int>> wheel;
vector<vector<int>> move_dir;

void move_wheel(int id, int dir)
{
    if(dir==-1){
        wheel[id].push_back(wheel[id][0]);
        wheel[id].erase(wheel[id].begin()); //맨 앞에거가 없어져야힘
    }
    else{
        wheel[id].pop_back();
        wheel[id].insert(wheel[id].begin(), wheel[id][7]);
    }
}
void play(int num,int dir){
    int tmp_dir=dir;
    char ns = wheel[num][6];

    for (int i = num - 1; i >= 0;i--){
        tmp_dir *= -1;
        if(ns==wheel[i][2])
            break;
        move_wheel(i, tmp_dir);
        ns = wheel[i][6];
    }

    tmp_dir = dir;
    ns = wheel[num][2];
    for (int i = num +1; i <4 0; i++)
    {
        tmp_dir *= -1;
        if (ns == wheel[i][6])
            break;
        move_wheel(i, tmp_dir);
        ns = wheel[i][2];
    }

    move_wheel(num, dir);
}
int solution(vector<vector<int>> wheel, int k, vector<vector<int>> move_dir)
{
    int plus = 1;
    int ans = 0;

    for (int i = 0; i < k;i++){
        play(move_dir[i][0] - 1, move_dir[i][1]);
    }

    for (int i = 0; i < 4;i++){
        if(wheel[i][0]=='1'){
            ans += plus;
            plus *= 2;
        }
    }

    return ans;
}

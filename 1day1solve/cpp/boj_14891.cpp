#include <iostream>
#include <string>
#include <deque>

using namespace std;

deque<char> wheel[4];

void move_wheel(int id, int dir)
{
    if (dir == -1)
    {
        wheel[id].push_back(wheel[id][0]);
        wheel[id].pop_front();
    }
    else
    {
        wheel[id].push_front(wheel[id][7]);
        wheel[id].pop_back();
    }
}

void play(int num, int dir)
{
    char pre_pole = wheel[num][6];
    int tmp_dir = dir;
    for (int i = num - 1; i >= 0; i--)
    {
        tmp_dir *= -1; //시계방향이었으면 반시계로 돌려야하고 반사계였으면 시계로 돌려야하니까
        if (wheel[i][2] == pre_pole)
            break;
        pre_pole = wheel[i][6];
        move_wheel(i, tmp_dir);
    }
    pre_pole = wheel[num][2];
    tmp_dir = dir;
    for (int i = num + 1; i < 4; i++)
    {
        tmp_dir *= -1;
        if (wheel[i][6] == pre_pole)
            break;
        pre_pole = wheel[i][2];
        move_wheel(i, tmp_dir);
    }
    move_wheel(num, dir);
}
int main()
{
    for (int i = 0; i < 4; i++)
    {
        string str;
        cin >> str;
        for (int j = 0; j < str.length(); j++)
        {
            wheel[i].push_back(str[j]);
        }
    }
    int k;
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        int num, dir;
        cin >> num >> dir;
        play(num - 1, dir);
    }
    int plus = 1;
    int total = 0;
    for (int i = 0; i < 4; i++)
    {
        if (wheel[i][0] == '1')
            total += plus;
        plus *= 2;
    }
    cout << total << "\n";
    return 0;
}
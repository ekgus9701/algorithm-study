

#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> solution(int r, int c, int zr, int zc, vector<string> words)
{
    vector<string> answer;
    string temp;

    for (int i = 0; i < r; i++)
    {
        temp = "";
        for (int j = 0; j < c; j++)
        {
            for (int k = 0; k < zc; k++)
            {
                temp += words[i][j];
            }
        }
        for (int l = 0; l < zr; l++)
        {
            answer.push_back(temp);
        }
    }
    return answer;
}

using namespace std;
int main()
{
    int r, c, zr, zc;
    vector<string> answer, words;
    string temp;

    cin >> r >> c >> zr >> zc;

    for (int i = 0; i < r; i++)
    {
        cin >> temp;
        if (temp.length() > c)
        {
            cout << "입력 범위를 초과하였습니다.\n";
            exit(1);
        }
        words.push_back(temp);
    }

    answer = solution(r, c, zr, zc, words);

    for (auto i : answer)
    {
        cout << i << endl;
    }

    return 0;
}
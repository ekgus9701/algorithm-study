#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

struct stud{
    string name;
    int kor, eng, math;
};

bool sorts(stud a,stud b){
    if(a.kor==b.kor && a.eng==b.eng && a.math==b.math){
        return a.name < b.name;
    }
    else if(a.kor==b.kor && a.eng==b.eng){
        return a.math > b.math;
    }
    else if(a.kor==b.kor){
        return a.eng < b.eng;
    }
    else{
        return a.kor > b.kor;
    }

}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector <stud> std(n);

    for (int i = 0; i < n;i++){
        cin >> std[i].name >> std[i].kor >> std[i].eng >> std[i].math;
    }

    sort(std.begin(), std.end(), sorts);

    for (int i = 0; i < n;i++){
        cout << std[i].name << "\n";
    }
}
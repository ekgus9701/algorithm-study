#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    vector<int> answer;
    
    
    int h=wallpaper.size();
    int w=wallpaper[0].size();
    
    int left=w-1,right=0,top=h-1,bottom=0;
    
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            if(wallpaper[i][j]=='#'){
                if(left>j){
                    left=j;
                }
                if(right<j){
                    right=j;
                }
                if(top>i){
                    top=i;
                }
                if(bottom<i){
                    bottom=i;
                }
                    
            }
        }
        
    }
    
    answer.push_back(top);
    answer.push_back(left);
    answer.push_back(bottom+1);
    answer.push_back(right+1);
    
    
    
    return answer;
}

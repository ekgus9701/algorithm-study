def promising(x):
    for i in range(x):
        if(row[x]==row[i] or x-i==abs(row[x]-row[i])):
            return False
    if(board[row[x]][x]==1):
        return False
    return True
def queen(x):
    global result
    if(x==N): 
        result+=1;
    else:
        for i in range(N):
            row[x]=i;
            if(promising(x)):
                queen(x+1)
        
    
## 기존 해설을 바탕으로 수정한다면 
def solution(N,k,x_arr, y_arr) :
    queen(0)
N = int(input())
k = int(input())
x_arr = list(map(int, input().split()))
y_arr = list(map(int, input().split()))
 
board = [[0] * N for i in range(N)]
for i in range(k):  # 놓을 수 없는 자리 저장
    board[x_arr[i] - 1][y_arr[i] - 1] = 1
 
#for i in range(N):
#    print(board[i])
#print()
 
row = [0] * N
result = 0
solution(N,k,x_arr,y_arr)
 
print(result)

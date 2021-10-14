#include<stdio.h>
#define ROW 100
#define COL 100

int main(){
    int A[ROW][COL] = {0};
    int B[ROW][COL] = {0};
    int N, M, K;

    scanf("%d %d", &N, &M);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &A[i][j]); //행렬 A에 받는다. 
        }
    }

    scanf("%d %d", &M, &K);
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < K; j++)
        {
            scanf("%d", &B[i][j]); //행렬 B에 받는다.
        }
    }
    
    for (int i = 0; i < N; i++) //계산할 A 배열의 행을 하나씩 증가시킨다.
    {
        for (int j = 0; j < K; j++) //계산할 B배열의 열을 하나씩 증가시킨다.
        {
            int sum = 0; //매번 출력해줘야하기 때문에 for문이 돌때마다 sum을 초기화 한다. 
            for (int p = 0; p < M; p++)  //계산할 A 배열의 열과 B배열의 행을 하나씩 증가시킨다.
            // 배열 A의 p열에 있는 값과 배열 B의 p행에 있는 값을 곱해야하기 때문에 for문을 돌려준다. 
            {
                sum += A[i][p] * B[p][j]; 
                //배열 A의 i행 p열에 있는 값과 배열 B의 p행 j 열에 있는 값을 곱해준 후 sum에 더한다.
            }
            printf("%d ", sum);
        }
        printf("\n"); //출력이 한행이 끝나면 다음 행으로 넘어간다.
    }

    return 0;
}


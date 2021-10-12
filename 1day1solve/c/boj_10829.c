#include <stdio.h>
#define SIZE 16

//수와  이진수를 저장할 배열
int solution(int n, int arr[])
{
    int pos = 0;
    while (1)
    {
        arr[SIZE - 1 - pos] = (n % 2);
        // 배열의 마지막 인덱스부터 저장하기 위해
        // SIZE-1-pos 인덱스에 n을 2로 나눈 나머지를 저장한다.
        n /= 2;     //n을 2로 나눈다.(윗장의 설명의 나눈 몫을 기억하는 것을 의미)
        pos++;      //이전에 저장한 배열의 앞 인덱스에 저장하기 위해 pos를 증가시킨다.
        if (n == 0) //나눈 몫이 0이 되면 반복문 종료 
            break;
    }

    return pos;
}

int main()
{

    int n;
    int answer[SIZE] = {0};
    int len = 0, i;

    scanf("%d", &n);

    len = solution(n, answer);

    for (i = SIZE - len; i < SIZE; i++) 
    //배열에 저장된 수부터 읽기 위해 i가 SIZE-len부터 시작 
        printf("%d", answer[i]);
}
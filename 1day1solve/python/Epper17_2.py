def solution(str):
    ans = 0

    for i in str:
        if(i=='1'):
            ans+=2;
        elif(i=='a' or i=='b' or i=='c'):
            ans+=3;
        elif(i=='d' or i=='e' or i=='f'):
            ans+=4;
        elif(i=='g' or i=='h' or i=='i'):
            ans+=5;
        elif(i=='j' or i=='k' or i=='l'):
            ans+=6;
        elif(i=='m' or i=='n' or i=='o'):
            ans+=7;
        elif(i=='p' or i=='r' or i=='s'):
            ans+=8;
        elif(i=='t' or i=='u' or i=='v'):
            ans+=9;
        elif(i=='x' or i=='y' or i=='w'):
            ans+=10;
        else:
            ans+=11;
    return ans
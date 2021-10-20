def solution(num):
    original=num
    reverse=0
    while(num>0):
        reverse=reverse*10+num%10
        num=num//10

    return original==reverse

while True:
    num=int(input())
    if num==0:
        break
    result=solution(num)
    if result==True:print("yes")
    else: print("no")
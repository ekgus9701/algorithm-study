
def solution(user_input):
    str1=str(user_input)
    str_reverse="";
    leng=len(str1)
    for i in range(leng):
        str_reverse+=str1[leng-1-i];
    if(str_reverse==str1):
        return "yes"
    else:
        return "no"

while(True):
    user_input=int(input());
    if user_input==0:
        break;
    print(solution(user_input));
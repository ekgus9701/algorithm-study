userinput=input();
answer='';
if(userinput[0]=="1"):
    answer+="1";

count=0
for i in range(len(userinput)-1):
    if(userinput[i]==userinput[i+1]):
        count+=1
    else:
        answer+=chr(ord('A')+count)
        count=0

answer+=chr(ord('A')+count)
print(answer)




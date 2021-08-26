s=input()
n=len(s)
list=[]
sum=0
for i in range(n):
    if(s[i].isalpha()):
        list.append(s[i])
    else:
        sum+=int(s[i])
new_list=sorted(list)
n1=len(list)
for i in range(n1):
    print(new_list[i],end="")
print(sum)


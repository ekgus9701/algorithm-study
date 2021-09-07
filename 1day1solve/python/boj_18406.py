n=input()
i=0
sum1=0
sum2=0
j=len(n)
j-=1
while(True):
    
    if(i>j):
        break
    sum1+=int(n[i])
    sum2+=int(n[j])
    i+=1
    j-=1
if(sum1==sum2):
    print("LUCKY")
else:
    print("READY")



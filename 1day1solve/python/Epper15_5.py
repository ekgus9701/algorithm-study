def solution(src):
    s=""
    check=0
    if(src[0]=='1'):
        s+='1'


    for i in range(len(src)-1):
        if src[i]==src[i+1]:
            check+=1
        
        else:
            s+=chr(ord('A')+check)
            check=0
    s+=chr(ord('A')+check)
    return s
		

if __name__=='__main__':
    user_input = input()
    
    print(solution(user_input))




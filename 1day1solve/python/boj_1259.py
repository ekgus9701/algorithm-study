while True:
    input1=input();
    leng1=len(input1)/2
    last=len(input1)-1
    
    if(input1=="0"):
        break

    if(len(input1)==1):
        print("yes")
        
    else:
        for i in range(int(leng1)):
            if(input1[i]!=input1[last-i]):
                print("no")
                break
                
            elif(i+1==int(leng1)):
                print("yes")

                


def solution(user_input):
	ans=0
	check=0
	for a in list(user_input):
		if a=="O":
			check+=1
			ans+=check
		else:
			check=0
	return ans

if __name__=='__main__':
    user_input = input()
    if len(user_input) > 1000:
        print('입력 범위를 초과하였습니다.\n')
        exit(1)
    print(solution(user_input))
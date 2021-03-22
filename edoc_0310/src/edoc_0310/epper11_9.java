package edoc_0310;
import java.util.*;
public class epper11_9 {
	public static int func(int left, int right) { 
		if (left == 0 && right == 0) //둘 다 전부 쓴거면 1 반환
			return 1;
		else {
			if (left == 0) //왼쪽 괄호 다 쓰면 오른쪽만 사용
				return 1;
			else if (left < right) //모든 상황에서 오른쪽 괄호가 왼쪽 괄호보다 많거나 같아야 짝 성립
				return func(left - 1, right) + func(left, right - 1);
			else //왼쪽 괄호와 오른쪽 괄호의 수가 같은 경우.
				return func(left - 1, right);
		}
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int n=sc.nextInt();
		System.out.println(func(n,n));
		
	}

}


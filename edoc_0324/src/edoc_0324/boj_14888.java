package edoc_0324;
//어려웠던점: 어떻게 해야할 지 감이 안왔다. 구글링을 참고했다. 백트래킹 문제를 더욱 공부할 필요가 있어보인다.
import java.util.Scanner;
 
public class boj_14888 {
 
	public static int MAX = Integer.MIN_VALUE;	// 최댓값 
	public static int MIN = Integer.MAX_VALUE;	// 최솟값 
	public static int[] op = new int[4];	// 연산자 개수 
	public static int[] number;					// 숫자 
	public static int n;						// 숫자 개수 
 
	public static void main(String[] args) {
 
		Scanner sc = new Scanner(System.in);
 
		n = sc.nextInt();
		number = new int[n];
 
		// 숫자 입력
		for (int i = 0; i < n; i++) {
			number[i] = sc.nextInt();
		}
 
		// 연산자 입력
		for (int i = 0; i < 4; i++) {
			op[i] = sc.nextInt();
		}
 
		dfs(number[0], 1); //재귀호출 시작
 
		System.out.println(MAX);
		System.out.println(MIN);
 
	}
 
	public static void dfs(int num, int idx) {
		if (idx == n) {
			MAX = Math.max(MAX, num);
			MIN = Math.min(MIN, num);
			return;
		}
 
		for (int i = 0; i < 4; i++) { // + - * /를 순서대로 한다
			// 연산자 개수가 1개 이상인 경우
			if (op[i] > 0) {
 
				// 해당 연산자를 1 감소시킨다.
				op[i]--;
 
				switch (i) {
 
				case 0:	dfs(num + number[idx], idx + 1);	break;
				case 1:	dfs(num - number[idx], idx + 1);	break;
				case 2:	dfs(num * number[idx], idx + 1);	break;
				case 3:	dfs(num / number[idx], idx + 1);	break;
 
				}
				// 재귀호출이 종료되면 다시 해당 연산자 개수를 복구한다.
				op[i]++;
			}
		}
	}
 
}
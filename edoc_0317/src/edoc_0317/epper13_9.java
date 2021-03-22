package edoc_0317;
import java.util.*;
public class epper13_9 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int m[]=new int[n+1];
		
		for(int i=1;i<n+1;i++) {
			m[i]=sc.nextInt();
		}
		
		int money[]=new int [30001];
		money[1]=m[1];
		money[2]=m[1]+m[2];
		for(int i=3;i<=n;i++) {
			money[i]=Math.max(money[i-2]+m[i], Math.max(money[i-3]+m[i-1]+m[i], money[i-1]));
		}
	
		System.out.println(money[n]);
	}

}

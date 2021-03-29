package edoc_0331;
import java.util.Scanner;
public class epper16_3 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int num=sc.nextInt();
		int ans=0;
		if(num>=3600) {
			ans+=num/3600;
			num%=3600;
			System.out.println(ans);
		}
		if(num>=60) {
			ans+=num/60;
			num%=60;
			System.out.println(ans);
		}
		ans+=num;
		
		System.out.println(ans);
	}

}

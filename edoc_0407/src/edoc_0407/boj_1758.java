package edoc_0407;
import java.util.*;
public class boj_1758 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int N=sc.nextInt();
		Integer people[]=new Integer[N];
		for(int i=0;i<N;i++) {
			people[i]=sc.nextInt();
		}
		
		Arrays.sort(people, Comparator.reverseOrder());
		
		long tip=0;
		for(int k=0;k<N;k++) {
			if(people[k]-k<0)
				break;
			tip+=people[k]-k;
			
		}
		System.out.println(tip);
	}

}

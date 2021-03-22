package edoc_0317;
import java.util.*;

public class epper15_7 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int n=sc.nextInt();
		int s[]=new int[n];
		int e[]=new int[n];
		
		for(int k=0;k<n;k++) {
			s[k]=sc.nextInt();
		}
		for(int k=0;k<n;k++) {
			e[k]=sc.nextInt();
		}
		
		int time[][]=new int[n][2];
		for(int i=0;i<n;i++) {
			
			time[i][0]=e[i]; //끝나는시간
			time[i][1]=s[i]; //시작시간
		}
		//오름차순 정렬
		Arrays.sort(time, new Comparator<int[]>() {
		    @Override
			public int compare(int[] o1, int[] o2) {
		    	 if(o1[0] == o2[0]) {
	                	 return o1[1] - o2[1];
		    	 }else {
		    		 return o1[0] - o2[0]; 
		    	 }
	           }
	        });
		//잘 오름차순 됐나 디버깅
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < 2; j++) {
				System.out.print(time[i][j] + " ");
			}
			System.out.println();
		}
		
		int a1=0,a2=0; int b=0;
		
		for(int i=0;i<time.length;i++) {
			if((time[i][1]>=a1&&time[i][1]>=a2)) { //a1,a2에 앉아있는애의 끝나는시간보다 새로운 애의 시작시간이 뒤라면
				//새로운 애의 시작시간과 a1,a2에 앉아있는 애의 끝나는 시간을 비교해서 차이가 덜나는 애가 앉아있는 의자에 앉힌다.
				if(time[i][1]-a1>time[i][1]-a2) {
					a2=time[i][0];
					b++;
				}
				else if(time[i][1]-a1<time[i][1]-a2) {
					a1=time[i][0];
					b++;
				}
				else if(time[i][1]-a1==time[i][1]-a2) { //차이가 같다면 그냥 a1의자에 앉힌다.
					a1=time[i][0];
					b++;
				}
			
			}
			
			else if(time[i][1]>=a1){//a1에 앉아있는애의 끝나는시간보다 새로운 애의 시작시간이 뒤라면
				a1=time[i][0]; //새로운 애를 a1의자에 앉힌다.
				b++;
			}
			else if(time[i][1]>=a2){//a2에 앉아있는애의 끝나는시간보다 새로운 애의 시작시간이 뒤라면
				a2=time[i][0];//새로운 애를 a2의자에 앉힌다.
				b++;	
			}
		}
		System.out.println(b);
		
	}

}

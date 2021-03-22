package edoc_0324;
//어떤 수 i의 최적의 해는 i 보다 작은 모든 제곱수 들 중 i - (제곱수)를 한 해 중 가장 작은 해에 1을 더한 값
//어려웠던 점: 받은 수보다 작은 제곱수들 중에서 가장 큰 제곱수를 빼면서 풀려고했는데 반례가 있었다. 어떻게 해야할지모르겠어서 구글링의 도움을 받았다.
import java.util.*;
import java.io.*;
public class boj_17626 {
	 public static void main(String[] args) throws Exception {
	        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	        
	        int N = Integer.parseInt(br.readLine());
	 
	        int[] dp = new int[N + 1];
	        dp[1] = 1;
	 
	        int min = 0;
	        for (int i = 2; i <= N; i++) {
	            min = Integer.MAX_VALUE;
	            
	            for (int j = 1; j * j <= i; j++) {
	                int temp = i - j * j;
	                min = Math.min(min, dp[temp]);  //4의 경우엔 dp[0]과 min(dp[3])을 비교 
	            }
	 
	            dp[i] = min + 1; 
	        }
	 }
	 
}

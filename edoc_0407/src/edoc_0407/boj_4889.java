package edoc_0407;

import java.io.*;
import java.util.*;

public class boj_4889 {

	public static void main(String[] args) throws Exception{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		

		int k = 1;
		
		while(true) {
			String str = br.readLine();
			if(str.contains("-")) break; // '-'가 포함돼있으면 while문 종료
			
			int n = str.length();
			int cnt = 0;
			Stack<Character> stack = new Stack<>();
			
			
			for(int i = 0; i < n; i++) {
				char tmp = str.charAt(i);
				if(tmp == '{') {
				
					stack.add(tmp);
				}else {
					if(stack.isEmpty()) {
						cnt++;
						stack.add('{');
					}
					else
						stack.pop();
				}
			}
			
			System.out.println(((k++) + ". " + (cnt + stack.size()/2)));
		}
		br.close();
		
	}
}

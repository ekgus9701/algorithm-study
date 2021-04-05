package edoc_0407;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;
public class boj_4889 {

	public static void main(String[] args) throws Exception {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String str = "";
		int count=0;
		Stack<String> stack = new Stack<>();
		
		while(true) {
			str = br.readLine();
			if(str.contains("-")) {
				break;
			}
			StringTokenizer st =new StringTokenizer(str,"");
			String token=st.nextToken();
			if(stack.empty()) {
				if(token.equals("}")) {
					token="{";
					count++;
				}
				if(token.equals(")")) {
					token="(";
					count++;
				}
				if(token.equals("]")) {
					token="[";
					count++;
				}
			}
			if(token.equals("[")||token.equals("{")||token.equals("(")) {
				stack.push(token);
			}
			
			
		}
		System.out.println(count);	
	}

}

package edoc_0331;

import java.io.*;

public class epper16_5 {

	public static void main(String[] args) throws Exception{
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		String str = "";
		String[] strArr;
	  
		str = br.readLine();	// "엔터(줄바꿈)"을 기준으로 입력받습니다!
		   
		strArr = str.split("");	
		
		
		if(strArr[0].equals("1")) {
			
			System.out.print("1");
		}
		
		int check=0;
		
		for(int i = 0; i < strArr.length; i++) {
			if(i==strArr.length-1) {
				int ans=65+check;
				System.out.println((char)ans);
				return;
			}
			
			if(strArr[i].equals("0")) {
				
				if(strArr[i+1].equals("0")) {
					check+=1;
				}
				
				if(strArr[i+1].equals("1")) {
					int ans=65+check;
					System.out.print((char)ans);
					check=0;
				}
			}
			if(strArr[i].equals("1")) {
				if(strArr[i+1].equals("1")) {
					check+=1;
				}
				if(strArr[i+1].equals("0")) {
					int ans=65+check;
					System.out.print((char)ans);
					check=0;
				}
			}
		
		}
	}

}

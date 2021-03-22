package edoc_0310;

import java.util.*;
 
class Word implements Comparable<Word>{
    String word;
    int count; //말해진 횟수
    
    public Word(String word) {
        this.word = word;
        this.count = 0;
    }
 
    @Override
    public int compareTo(Word o) {
        // 말한 횟수가 작은 순으로 정렬하되, 말한 횟수가 같다면 알파벳 순으로 정렬
        if (this.count == o.count) // 말한 횟수가 같다면 알파벳 순으로 정렬
            return this.word.compareTo(o.word);
        else 
        	return this.count - o.count;
    }
}
 
public class epper14_5 {
 
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int k, n;
        String word, find;
        Word ans;
 
        // 'a'부터 'z'까지 그 글자로 시작하는 단어를 담을 priorityQueue를 각각 생성.
        List<PriorityQueue<Word>> queue = new LinkedList<>();
        for(int i=0; i<('z'-'a'+1); i++)
            queue.add(new PriorityQueue<>());
        
        
        k = sc.nextInt();
        n = sc.nextInt();
        sc.nextLine();
 
        
        for(int i=0; i<k; i++){
            // 입력받은 글자로 Word 인스턴스 생성 후, 맞는 PriorityQueue(get(word.charAt(0)-'a'))에 담기(add).
            word = sc.nextLine();
            queue.get(word.charAt(0)-'a').add(new Word(word));
        }
 
      
        for(int i=0; i<n; i++){
            find = sc.nextLine();
            
            // 해당 글자로 시작하는 단어 중 가장 우선인것 꺼내어 출력하기
            ans = queue.get(find.charAt(0)-'a').poll();
            System.out.println(ans.word);
            
            // 한번 말해졌으므로, count 증가시키고 다시 queue에 넣기.
            ans.count++;
            queue.get(find.charAt(0)-'a').add(ans);
        } 
    }
}
import java.util.Scanner;
public class pdfViewer {

    static int pdfView(int[] h, String word){
      int i=0,max=0,ind=0,letter;
      for(;i<word.length();i++){
        letter=(int)word.charAt(i);
        if(letter>64 && letter<91)
          ind=letter-65;
        
        else if(letter>96 && letter<123)
        ind=letter-97;
        
        if(max<h[ind])
        max=h[ind];
      }
      return max*word.length();
    }
    
    public static void main(String[] args){
    Scanner in=new Scanner(System.in);
    
    int[] heights = new int[26];
    for(int i=0;i<26;i++){
      heights[i]=in.nextInt();
    }
    System.out.println(pdfView(heights , in.next()));
      in.close();
    }
    
    }
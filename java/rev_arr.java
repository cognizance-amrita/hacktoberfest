import java.util.Scanner;

public class rev_arr {
    public static void main(String args[]){
        Scanner in=new Scanner(System.in);
        int n;
        n=in.nextInt();
        int a[]=new int[n];
        for (int i=0;i<a.length;i++){
            a[i]=in.nextInt();
        }
        for(int j=a.length-1;j>=0;j--){
            System.out.println(a[j]);
        }

    }
}

import java.util.Scanner;

public class Delete_a_node{
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        int len=in.nextInt(),l,i;
        int[] list=new int[len];
        int[] rem=new int[len-1];
        for( i=0;i<len;i++){
            list[i]=in.nextInt();
        }
        int rem_ind=in.nextInt();
        for ( i=0, l=0;i<len;i++){
            if(i!=rem_ind)
            rem[l++]=list[i];
        }
        for(i=0;i<len-1;i++)
        System.out.print(rem[i]+" ");
    }
}
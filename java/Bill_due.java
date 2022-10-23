import java.util.Scanner;

public class Bill_due{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n,k,sum=0,paid;
        n=in.nextInt();
        k=in.nextInt();
        int[] orders = new int[n];
        for(int i =0;i<n;i++){
            orders[i]=in.nextInt();
            sum+=orders[i];
        }
        paid=in.nextInt();
        if(paid==((sum-orders[k])/2))
            System.out.println("Bon Appetit");
        else
        System.out.println(paid-(sum-orders[k])/2);
        
    }
}
import java.util.*;
public class  staircase
{
    public static void main(String[] args) 
    {
        Scanner kb=new Scanner(System.in);
        int n=kb.nextInt();
        for(int i=0;i<n;i++)
        {
            for (int j = n-1; j>=i; j--) 
            System.out.print("  ");
            for (int j = 0; j < i; j++) 
            System.out.print("# ");
            System.out.println();
        }
        kb.close();
    }
}

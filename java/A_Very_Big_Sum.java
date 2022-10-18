import java.math.BigInteger;
import java.util.*;
public class A_Very_Big_Sum 
{
    public static void main(String[] args) 
    {
        Scanner kb=new Scanner(System.in);
        int n=kb.nextInt();
        BigInteger sum= new BigInteger("0");
        for(int i=0;i<n;i++)
        {
            String s=kb.next();
            BigInteger a= new BigInteger(s);
            sum=sum.add(a);
        }
        System.out.println(sum);
        kb.close();
    }
}

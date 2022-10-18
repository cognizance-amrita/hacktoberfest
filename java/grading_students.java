import java.util.*;
public class grading_students
{
    public static void main(String[] args) 
    {
        Scanner kb=new Scanner(System.in);
        int n=kb.nextInt();
        for(int i=0;i<n;i++)
        {
            int x=kb.nextInt();
            if(x%5==0)
            System.out.println(x);
            else if((x+2)%5==0)
            System.out.println(x+2);
            else if ((x+1)%5==0)
            System.out.println(x+1);
            else
            System.out.println(x);
        }
        kb.close();
    }
}

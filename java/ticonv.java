import java.util.Scanner;
class ticonv
{
static void tico(String s)
{
    int h1 = (int)s.charAt(1) - '0';
    int h2 = (int)s.charAt(0) - '0';
    int hh = (h2 * 10 + h1 );
    if (s.charAt(8) == 'A')
    {
        if (hh == 12)
        {
            System.out.print("00");
            for (int i = 2; i <= 7; i++)
                System.out.print(s.charAt(i));
        }
        else
        {
            for (int i = 0; i <= 7; i++)
                System.out.print(s.charAt(i));
        }
    }
    else
    {
        if (hh == 12)
        {
            System.out.print("12");
            for (int i = 2; i <= 7; i++)
                System.out.print(s.charAt(i));
        }
        else
        {
            hh = hh + 12;
            System.out.print(hh);
            for (int i = 2; i <= 7; i++)
                System.out.print(s.charAt(i));
        }
    }
}
public static void main (String[] args)
{
Scanner sc=new Scanner(System.in);
System.out.println("enter the time in the correct format.for example 07:05:45PM:\n");
    String s=sc.nextLine();
    tico(s);
}
}
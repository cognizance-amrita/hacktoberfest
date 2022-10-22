import java.util.Scanner;
public class grading
{
public static void main(String ss[])
{
Scanner ob=new Scanner(System.in);
int n=ob.nextInt();
int a[]=new int[n];
for(int i=0;i<n;i++)
{
a[i]=ob.nextInt();
if(a[i]>40)
{
int temp=a[i];
while(a[i]%5!=0)
{
a[i]=a[i]+1;
}
if(a[i]-temp<3)
{
a[i]=a[i];
}
else
a[i]=temp;
}
}
System.out.print("output:");
for(int i=0;i<n;i++)
{
System.out.print(a[i]+"\n");
}
}
}






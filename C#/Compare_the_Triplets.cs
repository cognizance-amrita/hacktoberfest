using System;
 
class triplets
{
    static void Main()
    {
        int a_sum=0,b_sum=0;
        int[] a = new int[3];
        int[] b = new int[3]; 

        for(int i=0; i<3; i++){  
	      a[i] = Convert.ToInt32(Console.ReadLine());
        }
        for(int i=0; i<3; i++){  
	      b[i] = Convert.ToInt32(Console.ReadLine());
        }
        for(int i=0; i<3; i++){  
            if(a[i]>b[i]){
                a_sum+=1;
            }
            else if(a[i]<b[i]){
                b_sum+=1;
            }
        }
        Console.Write("{0} ", a_sum);
        Console.Write("{0}", b_sum);
    }
}

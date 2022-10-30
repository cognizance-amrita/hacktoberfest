using System;
 
class aVeryBigSum
{
    static void Main()
    {
        int n = int.Parse(Console.ReadLine());
        long[] arr = new long[n]; 
        long sum=0;
        
        for(int i=0; i<n; i++){  
	      arr[i] = Convert.ToInt64(Console.ReadLine());
	      sum+=arr[i];
        } 
        
        Console.Write("{0}  ", sum);
    }
}

using System;

public class Array_Reversal
{
   public static void Main()
    {
        var n = Convert.ToInt32(Console.ReadLine());
        var stringarr = Console.ReadLine().Split(' ');
        var arr = new int[100];
        for (var i = 0; i < n; i++)
        {
          arr[i] = int.Parse(stringarr[i]);
        }
        for(int j=n-1;j>=0;j--)
        {
          Console.WriteLine(arr[j] + " ");
        }
    }
}

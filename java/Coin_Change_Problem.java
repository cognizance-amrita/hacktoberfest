mport java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    static int m;
    static int c[];
    static long dp[];
    
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        m = in.nextInt();
        c = new int[m];
        for(int c_i=0; c_i < m; c_i++){
            c[c_i] = in.nextInt();
        }
        dp = new long[n+1];
        for(int i=0;i<n+1;i++)
            dp[i] = -1;
        System.out.println((n==0)?0:countWays(n));
    }
    
    static long countWays(int n){
        long[] table = new long[n+1];
        Arrays.fill(table, 0); 
        table[0] = 1;
        for (int i=0; i<m; i++)
            for (int j=c[i]; j<=n; j++)
                table[j] += table[j-c[i]];
 
        return table[n];
    }
    
    public static long getWays(int n){
        if(n<0) return 0;
        if(dp[n]!=-1){
            System.out.println("returning stored value");
            return dp[n];
        }
        if(n==0) return 1;
        long ways = 0;
        for(int i=0;i<m;i++){
            System.out.println("Checking for " + (n-c[i]));
            ways += getWays(n-c[i]);
        }
        dp[n] = ways;
        System.out.println("Storing dp[" + n + "] = " + ways);
        return dp[n];
    }
}
import java.util.*;

public class birthday_candles {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int max = 0;
        int sum = 0;
        int num;
        for (int i = 0; i < n; i++) {
            num = sc.nextInt();
            if (num > max) 
            {
                sum = 1;
                max = num;
            } 
            else if (num == max) 
            {
                sum++;
            }
        }
        sc.close();
        System.out.println(sum);
    }
}

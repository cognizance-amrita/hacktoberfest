import java.util.Scanner;
import java.lang.Math;
public class Cats_And_Mouse{

    static String catAndMouse(int a,int b,int c){
        if(Math.abs(c-a)==Math.abs(c-b))
        return "Mouse C";
        else if(Math.abs(c-a)<Math.abs(c-b))
        return "Cat A";
        else 
        return "Cat B";
    }

    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        int T=in.nextInt();
        while(T!=0){
            --T;
            System.out.println(catAndMouse(in.nextInt(),in.nextInt(),in.nextInt()));
        }
    }
}
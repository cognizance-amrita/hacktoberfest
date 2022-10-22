import java.util.Scanner;
public class Main
{
	public static void main(String[] args) {
	    
	    Scanner sc = new Scanner(System.in);
	    
	    int y = sc.nextInt();
	    
	    if(y < 1918){
	        if(y%4 == 0)
	        System.out.println("12.09."+y);
	        else
	        System.out.println("13.09."+y);
	    }
	    
	    else if(y > 1918){
	        if(y%400 == 0 || (y%4 == 0 && y%100 != 0))
	        System.out.println("12.09."+y);
	        else
	        System.out.println("13.09."+y);
	    }
	    
	    else{
	        System.out.println("26.09."+y);
	    }
		
	}
}

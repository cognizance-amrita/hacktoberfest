import java.io.*;
import java.util.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;
public class Main
{
public static int bonAppetit(List<Integer> bill,int k,int b){
	int c_amt = 0;
	
	int sum = bill.stream().mapToInt(i -> i).sum();
	
	c_amt = (sum - bill.get(k))/2;
	
	return (b - c_amt);	

}
public static void main(String[] args) throws IOException{
	
	BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
	
	List<Integer> nk = Stream.of(bf.readLine().replaceAll("\\s+$", "").split(" "))
            .map(Integer::parseInt)
            .collect(toList());
	
	List<Integer> bill = Stream.of(bf.readLine().replaceAll("\\s+$", "").split(" "))
            .map(Integer::parseInt)
            .collect(toList());
	
	int b = Integer.parseInt(bf.readLine().trim());
	int k = nk.get(1);
	
	int ba = bonAppetit(bill,k,b);
	
	if(ba > 0)
		System.out.println(ba);
	else
		System.out.println("Bon Appetit");

}
}

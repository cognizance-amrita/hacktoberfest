
import java.util.*;
import java.io.*;

import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;

public class Main
{
	public static void main(String[] args) throws IOException{
	    
	    BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
	    
	    List<Integer> l1 = Stream.of(bf.readLine().replaceAll("\\s+$", "").split(" "))
            .map(Integer::parseInt)
            .collect(toList());
	    
	    List<Integer> l2 = Stream.of(bf.readLine().replaceAll("\\s+$", "").split(" "))
            .map(Integer::parseInt)
            .collect(toList());
            
	    Queue<Integer> q=new LinkedList<>();
	    
	    int n = l1.get(0);
	    int d = l1.get(1);
	    
	    for(int i = 0; i < n; i++)
	    q.add(l2.get(i));
	    
	    
	    for(int j = 1; j <= d; j++){
	        int p = q.poll();
	        q.add(p);
	    }
	    
	    List<Integer> l3 = new ArrayList<Integer>(n);
	    
	    for(int e : q)
	    l3.add(e);
	    
	    for(int e1:l3)
	    System.out.print(e1+" ");
	    
	    
	    
		
	}
}
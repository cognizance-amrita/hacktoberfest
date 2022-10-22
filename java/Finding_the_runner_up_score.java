import java.util.*;
import java.io.*;

import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;


public class Main
{
	public static void main(String[] args) throws IOException{
		BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
		
		int n = Integer.parseInt(bf.readLine().trim());
		
		List<Integer> l = Stream.of(bf.readLine().replaceAll("\\s+$", "").split(" "))
            .map(Integer::parseInt)
            .collect(toList());
		
		Set<Integer> s = new HashSet<Integer>();
		
		s.addAll(l);
		
		Object a = Collections.max(s);
		s.remove(a);
		
		Object b = Collections.max(s);
		
		System.out.println(b);
		
		
	}
}

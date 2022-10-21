
import java.util.*;
import java.util.Stack;
public class Main
{
public static boolean isbalanced(String s){
Stack<Character> s1 = new Stack<>();
int c;
for (int i = 0; i < s.length(); i++){
switch(s.charAt(i)){
case '[':
case '{':
case '(':
s1.push(s.charAt(i));
break;
case ']':

if(s1.empty() || (c = Character.compare(s1.peek(),'[')) != 0)  
return false;
s1.pop();
break;
case '}':

if(s1.empty() || (c = Character.compare(s1.peek(),'{')) != 0)
return false;
s1.pop();
break;
case ')':

if(s1.empty() || (c = Character.compare(s1.peek(),'(')) != 0)
return false;
s1.pop();
break;
}
}

if(s1.empty())
return true;
else 
return false;
}
public static void main(String[] args) {
Scanner sc = new Scanner(System.in);

while(sc.hasNextLine()){
String s = sc.nextLine().trim();

System.out.println(isbalanced(s));

}

}
}

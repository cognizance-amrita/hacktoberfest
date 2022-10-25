import java.util.Scanner;

public class Finding_the_percentage{
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        int len=in.nextInt();
        String[] data= new String[len];
        int i;
        in.nextLine(); // dump , as the loop body nextLine func returns the  return(enter) value given when reading int value 
        for(i=0;i<len;i++){
            data[i]=in.nextLine();
        }
        String req=in.next();
        for(i=0;i<len;i++){
            String[] line = new String[4];
            line = data[i].split(" ");
            if(line[0].equals(req)){
                System.out.printf("%,.2f",
                    (Double.parseDouble(line[1])+Double.parseDouble(line[2])+Double.parseDouble(line[3]))/3.0);
            }
        }
    }
}
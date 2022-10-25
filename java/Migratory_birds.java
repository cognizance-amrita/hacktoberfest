import java.util.Scanner;

public class Migratory_birds{
    static int len;
    static int migratoryBirds(int[] sights){
        int hc=0,sb=0;
        for(int i=0;i<len;i++){
            int count=0;
            for(int j=0;j<len;j++){
                if(sights[i]==sights[j])
                    ++count;
            }
            if(hc<count){
                hc=count;
                sb=sights[i];
            }
            if(hc==count){
                sb= sights[i]<sb?sights[i]:sb;
            }
        }
        return sb;
    }
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        len=in.nextInt();
        int[] birds=new int[len];
        for(int i=0;i<len;i++)
            birds[i]=in.nextInt();
        System.out.println(migratoryBirds(birds));
    }
}
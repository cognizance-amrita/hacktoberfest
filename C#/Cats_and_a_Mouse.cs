using System;
 
class Cats_and_a_Mouse
{
    public void catAndMouse(int x,int y,int z){
        int a=Math.Abs(x-z);
        int b=Math.Abs(y-z);
        
        if(a<b){
            Console.WriteLine("Cat A\n");
        }
        else if(a>b){
            Console.WriteLine("Cat B\n");
        }
        else{
            Console.WriteLine("Mouse C\n");
        }
    }
    static void Main()
    {
        int q = int.Parse(Console.ReadLine());
        while(q>0){
            
        int x = int.Parse(Console.ReadLine());
        int y = int.Parse(Console.ReadLine());
        int z = int.Parse(Console.ReadLine());
        
        Cats_and_a_Mouse obj = new Cats_and_a_Mouse();
        obj.catAndMouse(x,y,z);
        
        q--;
        }
 
    }
}

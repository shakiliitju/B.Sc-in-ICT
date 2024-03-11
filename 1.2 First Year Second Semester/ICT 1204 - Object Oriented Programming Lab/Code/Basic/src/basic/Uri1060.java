
package basic;

import java.util.Scanner;


public class Uri1060 {
    
    public static void main(String[] args) {
        
        Scanner input = new Scanner(System.in);
        
         double x;
         int c = 0;
    for(int i=1; i<=6; i++)
    {
        x = input.nextDouble();
        if(x>0)
            c++;
    }
        System.out.printf("%d valores positivos\n",c);
    }
    
}

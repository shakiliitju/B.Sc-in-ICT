
package basic;

import java.util.Scanner;


public class Uri1064 {
    
    public static void main(String[] args) {
        
          
        Scanner input = new Scanner(System.in);
        
         double x,sum =0;
         int c = 0;
    for(int i=1; i<=6; i++)
    {
        x = input.nextDouble();
        if(x>0)
        {
            sum += x;
            c++;
        }
            
    }
        System.out.printf("%d valores positivos\n",c);
        System.out.printf("%.1f\n",sum/c);
    }
    
}

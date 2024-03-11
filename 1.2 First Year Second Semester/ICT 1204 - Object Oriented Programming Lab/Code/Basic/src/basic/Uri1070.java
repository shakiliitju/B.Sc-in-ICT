
package basic;

import java.util.Scanner;

public class Uri1070 {
    
    public static void main(String[] args) {
        
        Scanner input = new Scanner(System.in);
        
        int x;
        x = input.nextInt();
         for(int i=x; i<=x+12; i++)
    {
        if(i%2!=0)
            System.out.printf("%d\n",i);
    }
    }
    
}

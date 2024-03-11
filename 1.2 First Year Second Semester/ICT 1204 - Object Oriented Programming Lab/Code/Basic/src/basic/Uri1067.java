
package basic;

import java.util.Scanner;

public class Uri1067 {
    
    public static void main(String[] args) {
        
        Scanner input = new Scanner(System.in);
        
        int x;
        x = input.nextInt();
         for(int i=1; i<=x; i++)
    {
        if(i%2!=0)
            System.out.printf("%d\n",i);
    }
    }
    
}

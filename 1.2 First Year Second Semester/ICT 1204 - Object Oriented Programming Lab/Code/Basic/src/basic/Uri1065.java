
package basic;

import java.util.Scanner;


public class Uri1065 {
    
    public static void main(String[] args) {
        
        Scanner input = new Scanner(System.in);
        
        int c=0,x;
    for(int i=1; i<=5; i++)
    {
       x = input.nextInt();
        if(x%2==0)
        c++;
    }
        System.out.printf("%d valores pares\n",c);
    }
    
}

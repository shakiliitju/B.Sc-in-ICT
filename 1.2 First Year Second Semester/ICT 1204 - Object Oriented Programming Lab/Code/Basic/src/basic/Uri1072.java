
package basic;

import java.util.Scanner;

public class Uri1072 {
    
    public static void main(String[] args) {
        
        Scanner input = new Scanner(System.in);
        
         int N,X,a=0,b=0;
        N = input.nextInt();
    for(int i=0; i<N; i++)
    {
        X = input.nextInt();
        if(X>=10 && X<=20)
            a++;
        else
            b++;
    }
        System.out.printf("%d in\n",a);
         System.out.printf("%d out\n",b);
    }
    
}

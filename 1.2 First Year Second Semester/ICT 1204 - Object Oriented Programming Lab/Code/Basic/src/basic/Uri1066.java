
package basic;

import java.util.Scanner;

public class Uri1066 {
    
    public static void main(String[] args) {
        
        Scanner input = new Scanner(System.in);
        
        int a=0,b=0,c=0,d=0,x;
    for(int i=1; i<=5; i++)
    {
        x = input.nextInt();
        if(x%2==0)
            a++;
        if(x%2!=0)
            b++;
        if(x>0)
            c++;
        if(x<0)
            d++;
    }
        System.out.printf("%d valor(es) par(es)\n",a);
        System.out.printf("%d valor(es) impar(es)\n",b);
        System.out.printf("%d valor(es) positivo(s)\n",c);
        System.out.printf("%d valor(es) negativo(s)\n",d);
    }
    
}

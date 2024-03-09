
package basic;

import java.util.Scanner;


public class Uri1010 {
    
    public static void main(String[] args) {
        
        Scanner input = new Scanner(System.in);
        
        int A1,B1,A2,B2;
    double C1,C2,X1,X2;

    A1 = input.nextInt();
    B1 = input.nextInt();
    C1 = input.nextDouble();
    
    X1 = B1 * C1;
    
     A2 = input.nextInt();
    B2 = input.nextInt();
    C2 = input.nextDouble();
    
    X2 = B2 * C2;
    
        System.out.printf("VALOR A PAGAR: R$ %.2f\n",X1+X2);
    
    
    }
    
}

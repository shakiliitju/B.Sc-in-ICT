
package basicjava;

import java.util.Scanner;

public class Oparetor {

    public static void main(String[] args) {
        
        Scanner a = new Scanner (System.in);

        int num1, num2;
        int sum;
        
        System.out.print("Enter first number : ");
        num1 = a.nextInt();

        System.out.print("Enter second number : ");
        num2 = a.nextInt();

        sum = num1 + num2;
        System.out.println(sum);

        sum = num1 - num2;
        System.out.println(sum);

        sum = num1 * num2;
        System.out.println(sum);

        sum = num1 / num2;
        System.out.println(sum);

        sum = num1 % num2;
        System.out.println(sum);

    }
}

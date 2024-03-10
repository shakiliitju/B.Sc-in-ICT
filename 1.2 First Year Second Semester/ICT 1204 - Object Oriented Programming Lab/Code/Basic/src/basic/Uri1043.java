package basic;

import java.util.Scanner;

public class Uri1043 {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        double a, b, c, P, A;

        a = input.nextDouble();
        b = input.nextDouble();
        c = input.nextDouble();

        if ((a + b) > c && (b + c) > a && (c + a) > b) {
            P = a + b + c;
            System.out.printf("Perimetro = %.1f\n", P);
        } else {
            A = 0.5 * (a + b) * c;
            System.out.printf("Area = %.1f\n", A);
        }
    }

}

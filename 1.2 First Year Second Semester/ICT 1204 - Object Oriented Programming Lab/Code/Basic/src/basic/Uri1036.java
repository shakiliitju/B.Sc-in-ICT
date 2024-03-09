package basic;

import java.util.Scanner;


public class Uri1036 {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        double a, b, c, d, x, R1, R2;
        a = input.nextDouble();
        b = input.nextDouble();
        c = input.nextDouble();

        d = (b * b) - (4 * a * c);

        if (a == 0 || d < 0) {
            System.out.println("Impossivel calcular");
        } else {
            x = Math.sqrt(d);
            R1 = (-b + x) / (2 * a);
            R2 = (-b - x) / (2 * a);
            System.out.printf("R1 = %.5f\n", R1);
            System.out.printf("R2 = %.5f\n", R2);
        }
    }
}

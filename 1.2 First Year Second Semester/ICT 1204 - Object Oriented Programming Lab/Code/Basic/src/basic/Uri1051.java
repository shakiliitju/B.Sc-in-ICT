package basic;

import java.util.Scanner;

public class Uri1051 {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        double x, y;
        x = input.nextDouble();

        if (x <= 2000) {
            System.out.println("Isento");
        } else if (x <= 3000) {
            y = ((x - 2000) * 8) / 100;
            System.out.printf("R$ %.2f\n", y);
        } else if (x <= 4500) {
            y = (10 * 8) + ((x - 3000) * 18) / 100;
            System.out.printf("R$ %.2f\n", y);
        } else if (x > 4500) {
            y = (10 * 8) + (15 * 18) + ((x - 4500) * 28) / 100;
            System.out.printf("R$ %.2f\n", y);
        }
    }
}

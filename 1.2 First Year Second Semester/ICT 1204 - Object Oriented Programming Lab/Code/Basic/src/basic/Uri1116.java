package basic;

import java.util.Scanner;

public class Uri1116 {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        double i, t, x, y, z;
        t = input.nextDouble();
        for (i = 0; i < t; i++) {
            x = input.nextDouble();
            y = input.nextDouble();

            z = x / y;
            if (y == 0) {
                System.out.println("divisao impossivel");
            } else {
                System.out.printf("%.1f\n", z);
            }
        }
    }

}

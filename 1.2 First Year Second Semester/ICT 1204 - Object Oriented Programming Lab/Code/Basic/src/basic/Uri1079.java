package basic;

import java.util.Scanner;

public class Uri1079 {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int i, t;
        double a, x, y, z;
        t = input.nextInt();
        for (i = 0; i < t; i++) {
            x = input.nextDouble();
            y = input.nextDouble();
            z = input.nextDouble();

            a = (x * 2 + y * 3 + z * 5) / 10;
            System.out.printf("%.1f\n", a);
        }
    }

}

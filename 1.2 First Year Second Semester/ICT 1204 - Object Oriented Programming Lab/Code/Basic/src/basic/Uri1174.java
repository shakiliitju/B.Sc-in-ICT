package basic;

import java.util.Scanner;

public class Uri1174 {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int i;
        double A;

        for (i = 0; i < 100; i++) {
            A = input.nextDouble();

            if (A <= 10) {
                System.out.printf("A[%d] = %.1f\n", i, A);
            }
        }
    }

}

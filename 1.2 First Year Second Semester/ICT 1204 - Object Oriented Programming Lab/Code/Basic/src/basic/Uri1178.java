package basic;

import java.util.Scanner;

public class Uri1178 {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        double X;
        int i;
        X = input.nextDouble();

        for (i = 0; i < 100; i++) {
            System.out.printf("N[%d] = %.4f\n", i, X);
            X = X / 2;
        }
    }

}

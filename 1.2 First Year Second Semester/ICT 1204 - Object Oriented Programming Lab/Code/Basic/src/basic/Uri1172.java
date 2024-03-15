package basic;

import java.util.Scanner;

public class Uri1172 {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int i, X;

        for (i = 0; i < 10; i++) {
            X = input.nextInt();
            if (X <= 0) {
                System.out.printf("X[%d] = 1\n", i);
            } else {
                System.out.printf("X[%d] = %d\n", i, X);
            }
        }
    }

}

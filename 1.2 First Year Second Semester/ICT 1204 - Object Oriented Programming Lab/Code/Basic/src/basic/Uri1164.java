package basic;

import java.util.Scanner;

public class Uri1164 {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int t, i, j, X, sum;
        t = input.nextInt();

        for (j = 0; j < t; j++) {
            X = input.nextInt();
            sum = 0;
            for (i = 1; i <= X / 2; i++) {
                if (X % i == 0) {
                    sum += i;
                }
            }
            if (sum == X) {
                System.out.printf("%d eh perfeito\n", X);
            } else {
                System.out.printf("%d nao eh perfeito\n", X);
            }
        }
    }

}

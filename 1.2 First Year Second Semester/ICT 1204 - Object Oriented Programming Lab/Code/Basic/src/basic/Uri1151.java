package basic;

import java.util.Scanner;

public class Uri1151 {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int i, j, n, x[ 50];
    n = input.nextInt();

        x[0] = 0;
        x[1] = 1;

        for (i = 2; i < n; i++) {
            x[i] = x[i - 1] + x[i - 2];
        }

        for (i = 0; i < n; i++) {
            System.out.printf("%d", x[i]);
            if (i < n - 1) {
                System.out.printf(" ");
            }
            if (i == n - 1) {
                System.out.printf("\n");
            }
        }

    }

}

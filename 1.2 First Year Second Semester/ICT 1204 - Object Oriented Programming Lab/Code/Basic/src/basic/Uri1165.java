package basic;

import java.util.Scanner;

public class Uri1165 {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int i, j, t, n, count;
        t = input.nextInt();

        for (i = 0; i < t; i++) {
            n = input.nextInt();
            count = 0;
            for (j = 2; j < n; j++) {
                if (n % j == 0) {
                    count++;
                    break;
                }
            }
            if (count == 0) {
                System.out.printf("%d eh primo\n", n);
            } else {
                System.out.printf("%d nao eh primo\n", n);
            }

        }
    }

}

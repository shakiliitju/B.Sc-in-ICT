package basic;

import java.util.Scanner;

public class Uri1146 {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int i, n;
        while ((n = input.nextInt()) != 0) {
            for (i = 1; i <= n; i++) {
                System.out.printf("%d", i);
                if (i < n) {
                    System.out.printf(" ");
                }
                if (i == n) {
                    System.out.printf("\n");
                }
            }
        }

    }
}

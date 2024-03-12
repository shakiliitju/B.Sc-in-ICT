package basic;

import java.util.Scanner;

public class Uri1074 {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int t, i, x;

        t = input.nextInt();

        for (i = 0; i < t; i++) {
            x = input.nextInt();
            if (x % 2 == 0 && x > 0) {
                System.out.printf("EVEN POSITIVE\n");
            }
            if (x % 2 == 0 && x < 0) {
                System.out.printf("EVEN NEGATIVE\n");
            }
            if (x % 2 != 0 && x > 0) {
                System.out.printf("ODD POSITIVE\n");
            }
            if (x % 2 != 0 && x < 0) {
                System.out.printf("ODD NEGATIVE\n");
            }
            if (x == 0) {
                System.out.printf("NULL\n");
            }
        }

    }

}

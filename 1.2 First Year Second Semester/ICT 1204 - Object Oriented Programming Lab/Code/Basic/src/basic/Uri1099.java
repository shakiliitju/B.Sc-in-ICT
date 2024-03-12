package basic;

import java.util.Scanner;

public class Uri1099 {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int i, j, t, x, y, temp, sum = 0;
        t = input.nextInt();

        for (i = 0; i < t; i++) {
            x = input.nextInt();
            y = input.nextInt();

            if (x > y) {
                temp = x;
                x = y;
                y = temp;
            }
            for (j = x + 1; j < y; j++) {
                if (j % 2 != 0) {
                    sum = sum + j;
                }
            }
            System.out.printf("%d\n", sum);
            sum = 0;
        }
    }

}

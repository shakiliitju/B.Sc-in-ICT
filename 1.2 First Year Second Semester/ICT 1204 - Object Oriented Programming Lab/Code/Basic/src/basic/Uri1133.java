package basic;

import java.util.Scanner;

public class Uri1133 {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int i, x, y, temp;

        x = input.nextInt();
        y = input.nextInt();

        if (x > y) {
            temp = x;
            x = y;
            y = temp;
        }
        for (i = x + 1; i < y; i++) {
            if (i % 5 == 2 || i % 5 == 3) {
                System.out.printf("%d\n", i);
            }
        }

    }

}

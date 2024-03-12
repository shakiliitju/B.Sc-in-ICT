package basic;

import java.util.Scanner;

public class Uri1132 {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int i, x, y, temp, sum = 0;

        x = input.nextInt();
        y = input.nextInt();

        if (x > y) {
            temp = x;
            x = y;
            y = temp;
        }
        for (i = x; i <= y; i++) {
            if (i % 13 != 0) {
                sum += i;
            }
        }
        System.out.printf("%d\n", sum);
    }
}

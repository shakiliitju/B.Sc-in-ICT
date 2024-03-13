package basic;

import java.util.Scanner;

public class Uri1145 {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int i, j, x, y, k = 0;

        x = input.nextInt();
        y = input.nextInt();

        for (i = 1; i <= y; i++) {
            k++;
            if (k == x) {
                System.out.printf("%d", i);
                k = 0;
                System.out.printf("\n");
            } else {
                System.out.printf("%d ", i);
            }

        }
    }

}

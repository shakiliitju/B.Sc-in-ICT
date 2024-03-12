package basic;

import java.util.Scanner;

public class Uri1075 {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int x, y, i;

        x = input.nextInt();

        System.out.printf("2\n");
        for (i = 1; i < 1000; i++) {
            if (x * i <= 10000) {
                System.out.printf("%d\n", x * i + 2);
            }
        }
    }

}

package basic;

import java.util.Scanner;

public class Uri1078 {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int x, i;
        x = input.nextInt();
        for (i = 1; i <= 10; i++) {
            System.out.printf("%d x %d = %d\n", i, x, i * x);
        }
    }

}

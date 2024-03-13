package basic;

import java.util.Scanner;

public class Uri1142 {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int i, n;

        n = input.nextInt();

        for (i = 1; i <= n * 4; i += 4) {
            System.out.printf("%d %d %d PUM\n", i, i + 1, i + 2);
        }
    }

}

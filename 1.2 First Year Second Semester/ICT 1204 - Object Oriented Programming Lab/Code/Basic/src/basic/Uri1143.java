package basic;

import java.util.Scanner;

public class Uri1143 {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int i, n;
        n = input.nextInt();

        for (i = 1; i <= n; i++) {
            System.out.printf("%d %d %d\n", i, i * i, i * i * i);
        }
    }

}

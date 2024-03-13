package basic;

import java.util.Scanner;

public class Uri1153 {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int i, n, fact = 1;
        n = input.nextInt();

        for (i = 1; i <= n; i++) {
            fact = fact * i;
        }
        System.out.printf("%d\n", fact);
    }

}

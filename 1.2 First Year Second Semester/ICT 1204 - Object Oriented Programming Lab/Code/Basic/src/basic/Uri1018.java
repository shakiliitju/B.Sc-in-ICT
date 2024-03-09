package basic;

import java.util.Scanner;

public class Uri1018 {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int N, x;
        N = input.nextInt();
        System.out.printf("%d\n", N);
        x = N;
        System.out.printf("%d nota(s) de R$ 100,00\n", x / 100);
        x = (x % 100);
        System.out.printf("%d nota(s) de R$ 50,00\n", x / 50);
        x = (x % 50);
        System.out.printf("%d nota(s) de R$ 20,00\n", x / 20);
        x = (x % 20);
        System.out.printf("%d nota(s) de R$ 10,00\n", x / 10);
        x = (x % 10);
        System.out.printf("%d nota(s) de R$ 5,00\n", x / 5);
        x = (x % 5);
        System.out.printf("%d nota(s) de R$ 2,00\n", x / 2);
        x = (x % 2);
        System.out.printf("%d nota(s) de R$ 1,00\n", x / 1);

    }

}

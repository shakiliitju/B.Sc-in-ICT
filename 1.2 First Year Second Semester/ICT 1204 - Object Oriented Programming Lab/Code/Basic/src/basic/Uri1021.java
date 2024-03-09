package basic;

import java.util.Scanner;

public class Uri1021 {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int y;
        double x;

        x = input.nextDouble();

        System.out.printf("NOTAS:\n");
        y = (int) x;
        System.out.printf("%d nota(s) de R$ 100.00\n", y / 100);
        y = (y % 100);
        System.out.printf("%d nota(s) de R$ 50.00\n", y / 50);
        y = (y % 50);
        System.out.printf("%d nota(s) de R$ 20.00\n", y / 20);
        y = (y % 20);
        System.out.printf("%d nota(s) de R$ 10.00\n", y / 10);
        y = (y % 10);
        System.out.printf("%d nota(s) de R$ 5.00\n", y / 5);
        y = (y % 5);
        System.out.printf("%d nota(s) de R$ 2.00\n", y / 2);

        System.out.printf("MOEDAS:\n");
        y = (y % 2);
        System.out.printf("%d moeda(s) de R$ 1.00\n", y / 1);
        y = (int) (x * 100);
        y = (y % 100);
        System.out.printf("%d moeda(s) de R$ 0.50\n", y / 50);
        y = (y % 50);
        System.out.printf("%d moeda(s) de R$ 0.25\n", y / 25);
        y = (y % 25);
        System.out.printf("%d moeda(s) de R$ 0.10\n", y / 10);
        y = (y % 10);
        System.out.printf("%d moeda(s) de R$ 0.05\n", y / 5);
        y = (y % 5);
        System.out.printf("%d moeda(s) de R$ 0.01\n", y / 1);

    }

}

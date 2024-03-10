package basic;

import java.util.Scanner;

public class Uri1048 {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        double n;
        n = input.nextDouble();
        if (n <= 400) {
            System.out.printf("Novo salario: %.2f\n", n + n * 0.15);
            System.out.printf("Reajuste ganho: %.2f\n", n * 0.15);
            System.out.printf("Em percentual: 15 %%\n");
        } else if (n <= 800) {
            System.out.printf("Novo salario: %.2f\n", n + n * 0.12);
            System.out.printf("Reajuste ganho: %.2f\n", n * 0.12);
            System.out.printf("Em percentual: 12 %%\n");
        } else if (n <= 1200) {
            System.out.printf("Novo salario: %.2f\n", n + n * 0.10);
            System.out.printf("Reajuste ganho: %.2f\n", n * 0.10);
            System.out.printf("Em percentual: 10 %%\n");
        } else if (n <= 2000) {
            System.out.printf("Novo salario: %.2f\n", n + n * 0.07);
            System.out.printf("Reajuste ganho: %.2f\n", n * 0.07);
            System.out.printf("Em percentual: 7 %%\n");
        } else {
            System.out.printf("Novo salario: %.2f\n", n + n * 0.04);
            System.out.printf("Reajuste ganho: %.2f\n", n * 0.04);
            System.out.printf("Em percentual: 4 %%\n");
        }

    }

}

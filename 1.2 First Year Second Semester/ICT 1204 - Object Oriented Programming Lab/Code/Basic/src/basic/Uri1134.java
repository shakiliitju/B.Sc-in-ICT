package basic;

import java.util.Scanner;

public class Uri1134 {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int x, count1 = 0, count2 = 0, count3 = 0;
        while ((x = input.nextInt()) != 4) {

            if (x == 1) {
                count1++;
            }
            if (x == 2) {
                count2++;
            }
            if (x == 3) {
                count3++;
            }
        }
        System.out.printf("MUITO OBRIGADO\n");
        System.out.printf("Alcool: %d\n", count1);
        System.out.printf("Gasolina: %d\n", count2);
        System.out.printf("Diesel: %d\n", count3);

    }

}

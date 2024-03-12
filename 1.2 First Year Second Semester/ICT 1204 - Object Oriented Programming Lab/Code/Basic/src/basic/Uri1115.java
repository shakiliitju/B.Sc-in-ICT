package basic;

import java.util.Scanner;

public class Uri1115 {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int x, y;
        while (((x = input.nextInt()) != 0) && ((y = input.nextInt()) != 0)) {
            if (x > 0 && y > 0) {
                System.out.printf("primeiro\n");
            }
            if (x > 0 && y < 0) {
                System.out.printf("quarto\n");
            }
            if (x < 0 && y > 0) {
                System.out.printf("segundo\n");
            }
            if (x < 0 && y < 0) {
                System.out.printf("terceiro\n");
            }
        }
    }

}

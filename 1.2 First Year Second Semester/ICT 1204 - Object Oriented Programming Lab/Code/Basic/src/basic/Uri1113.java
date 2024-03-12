package basic;

import java.util.Scanner;

public class Uri1113 {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int x, y;
        while (true) {
            x = input.nextInt();
            y = input.nextInt();

            if (x > y) {
                System.out.printf("Decrescente\n");
            } else if (x < y) {
                System.out.printf("Crescente\n");
            } else {
                break;
            }
        }
    }

}

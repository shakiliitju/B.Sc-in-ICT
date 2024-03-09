package basic;

import java.util.Scanner;

public class Uri1009 {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        double b, c, TOTAL;
        String name = input.next();
        b = input.nextDouble();
        c = input.nextDouble();

        TOTAL = b + (c * 15) / 100;

        System.out.printf("TOTAL = R$ %.2f\n", TOTAL);
    }

}

package basic;

import java.util.Scanner;

public class Uri1117 {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        double x, Avg, sum = 0, count = 0;

        while (true) {
            x = input.nextDouble();

            if (x < 0 || x > 10) {
                System.out.println("nota invalida");
            } else if (x >= 0 && x <= 10) {
                count++;
                sum = sum + x;
            }
            if (count == 2) {
                break;
            }
        }
        Avg = sum / 2.0;
        System.out.printf("media = %.2f\n", Avg);

    }

}

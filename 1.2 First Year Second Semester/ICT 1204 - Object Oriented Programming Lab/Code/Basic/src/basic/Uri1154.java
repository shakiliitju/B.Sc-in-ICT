package basic;

import java.util.Scanner;

public class Uri1154 {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int x, c = 0, sum = 0;
        double avg;
        while (true) {
            x = input.nextInt();

            if (x < 0) {
                break;
            }
            c++;
            sum += x;
        }
        avg = (double) sum / c;
        System.out.printf("%.2f\n", avg);
    }

}

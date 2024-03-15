package basic;

import java.util.Scanner;

public class Uri1158 {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int i, j, N, X, Y, sum = 0;
        N = input.nextInt();

        for (i = 0; i < N; i++) {
            X = input.nextInt();
            Y = input.nextInt();

            if (X % 2 == 0) {
                X++;
            }
            for (j = 1; j <= Y; j++) {
                sum += X;
                X += 2;
            }
            System.out.println(sum);
            sum = 0;
        }

    }

}

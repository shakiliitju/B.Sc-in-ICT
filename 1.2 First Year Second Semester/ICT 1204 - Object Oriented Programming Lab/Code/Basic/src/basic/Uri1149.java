package basic;

import java.util.Scanner;

public class Uri1149 {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int i, A, N, sum = 0;

        A = input.nextInt();
        N = input.nextInt();

        while (N <= 0) {
            N = input.nextInt();
        }
        for (i = 0; i < N; i++) {
            sum += A;
            A++;
        }
        System.out.printf("%d\n", sum);

    }

}

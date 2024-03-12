package basic;

import java.util.Scanner;

public class Uri1101 {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int i, M, N, temp, sum = 0;
        while (true) {
            M = input.nextInt();
            N = input.nextInt();

            if (M <= 0 || N <= 0) {
                break;
            } else {
                if (M > N) {
                    temp = M;
                    M = N;
                    N = temp;
                }
                for (i = M; i <= N; i++) {
                    sum = sum + i;
                    System.out.printf("%d ", i);
                }
                System.out.printf("Sum=%d\n", sum);
                sum = 0;
            }
        }
    }

}

package basic;

import java.util.Scanner;

public class Uri1073 {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int N;
        N = input.nextInt();

        for (int i = 2; i <= N; i += 2) {
            System.out.printf("%d^2 = %d\n", i, i * i);
        }

    }

}

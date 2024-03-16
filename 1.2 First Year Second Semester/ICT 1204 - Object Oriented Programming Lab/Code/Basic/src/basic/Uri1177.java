package basic;

import java.util.Scanner;

public class Uri1177 {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int i, T, N[1000];
        int k = 0;
        T = input.nextInt();

        for (i = 0; i < 1000; i++) {
            if (k % T == 0) {
                N[i] = k;
                k = 0;
            }
            System.out.printf("N[%d] = %d\n", i, k);
            k++;
        }
    }

}

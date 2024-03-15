package basic;

import java.util.Scanner;

public class Uri1173 {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int i, V;
        V = input.nextInt();

        for (i = 0; i < 10; i++) {
            System.out.printf("N[%d] = %d\n", i, V);
            V = V * 2;
        }
    }

}

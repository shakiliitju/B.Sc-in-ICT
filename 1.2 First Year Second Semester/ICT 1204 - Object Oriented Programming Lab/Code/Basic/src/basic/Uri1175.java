package basic;

import java.util.Scanner;

public class Uri1175 {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int i, j, temp, N[20];

    for (i = 0; i < 20; i++) {
            N[20] = input.nextInt();
        }

        for (i = 0, j = 19; i < 10; i++, j--) {
            temp = N[i];
            N[i] = N[j];
            N[j] = temp;
        }
        
        for (i = 0; i < 20; i++) {
            System.out.printf("N[%d] = %d\n", i, N[i]);
        }
    }

}

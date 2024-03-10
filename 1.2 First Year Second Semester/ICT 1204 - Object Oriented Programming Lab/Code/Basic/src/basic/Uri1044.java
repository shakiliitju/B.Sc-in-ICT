package basic;

import java.util.Scanner;

public class Uri1044 {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int A, B, temp;
        A = input.nextInt();
        B = input.nextInt();

        if (A > B) {
            temp = A;
            A = B;
            B = temp;
        }

        if (B % A == 0) {
            System.out.println("Sao Multiplos");
        } else if ((B % A) != 0) {
            System.out.println("Nao sao Multiplos");
        }

    }

}

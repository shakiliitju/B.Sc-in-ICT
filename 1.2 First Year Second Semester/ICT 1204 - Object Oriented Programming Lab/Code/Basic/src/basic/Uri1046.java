package basic;

import java.util.Scanner;

public class Uri1046 {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int a, b;
        a = input.nextInt();
        b = input.nextInt();

        if (a < b) {
            System.out.printf("O JOGO DUROU %d HORA(S)\n", b - a);
        } else {
            System.out.printf("O JOGO DUROU %d HORA(S)\n", (24 + b) - a);
        }

    }

}

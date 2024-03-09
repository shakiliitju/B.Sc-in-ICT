package basic;

import java.util.Scanner;

public class Uri1020 {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int a, y, m, d;
        a = input.nextInt();
        y = a / 365;
        m = (a % 365) / 30;
        d = (a % 365) % 30;

        System.out.printf("%d ano(s)\n", y);
        System.out.printf("%d mes(es)\n", m);
        System.out.printf("%d dia(s)\n", d);

    }

}

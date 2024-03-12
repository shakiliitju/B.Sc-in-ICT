package basic;

import java.util.Scanner;

public class Uri1114 {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int n;
        n = input.nextInt();
        while (n != 2002) {
            System.out.printf("Senha Invalida\n");
            n = input.nextInt();
        }
        System.out.println("Acesso Permitido");
    }

}

package basic;

import java.util.Scanner;

public class Uri1047 {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int sh, sm, eh, em, dm, dh;

        sh = input.nextInt();
        sm = input.nextInt();
        eh = input.nextInt();
        em = input.nextInt();

        dh = eh - sh;
        if (dh < 0) {
            dh = 24 + (eh - sh);
        }
        dm = em - sm;
        if (dm < 0) {
            dm = 60 + (em - sm);
            dh--;
        }
        if (eh == sh && em == sm) {
            System.out.printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");

        } else {
            System.out.printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", dh, dm);
        }

    }

}

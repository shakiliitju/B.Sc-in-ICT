package basic;

import java.util.Scanner;

public class Uri1040 {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        double a, b, c, d, e, ave, f_ave;
        a = input.nextDouble();
        b = input.nextDouble();
        c = input.nextDouble();
        d = input.nextDouble();

        ave = (a * 2 + b * 3 + c * 4 + d * 1) / 10.0;
        System.out.printf("Media: %.1f\n", ave);

        if (ave >= 7.0) {
            System.out.println("Aluno aprovado.");
        } else if (ave < 5.0) {
            System.out.println("Aluno reprovado.");
        } else {
            System.out.println("Aluno em exame.");

            e = input.nextDouble();
            System.out.printf("Nota do exame: %.1f\n", e);

            f_ave = (ave + e) / 2.0;

            if (f_ave >= 5) {
                System.out.println("Aluno aprovado.");
            } else if (f_ave <= 4.9) {
                System.out.println("Aluno reprovado.");
            }

            System.out.printf("Media final: %.1f\n", f_ave);
        }
    }
}

package labclass;

import java.util.Scanner;

public class Lab2Problem4 {

    public static void main(String[] args) {

        int row, col;
        Scanner input = new Scanner(System.in);
        String[][] Criminals = new String[2][2];

        for (row = 0; row < Criminals.length; row++) {
            for (col = 0; col < Criminals[row].length; col++) {
                System.out.print("Enter a Criminal name : ");
                Criminals[row][col] = input.nextLine();
            }
        }

        System.out.println(" criminal List : ");
        for (row = 0; row < Criminals.length; row++) {
            for (col = 0; col < Criminals[row].length; col++) {
                System.out.println("\t\t" + Criminals[row][col]);

            }

        }
    }
}

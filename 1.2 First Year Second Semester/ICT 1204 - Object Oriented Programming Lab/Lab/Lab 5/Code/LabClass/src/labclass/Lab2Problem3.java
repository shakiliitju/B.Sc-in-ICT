package labclass;

import java.util.Scanner;

public class Lab2Problem3 {

    public static void main(String[] args) {

        int row, col;
        Scanner input = new Scanner(System.in);
        double a[][] = new double[3][3];
        System.out.println("Enter Value : ");

        for (row = 0; row < a.length; row++) {
            for (col = 0; col < a.length; col++) {
                a[row][col] = input.nextDouble();
            }
        }

        System.out.println("The two dimention array : ");
        for (row = 0; row < a.length; row++) {
            for (col = 0; col < a.length; col++) {
                System.out.print(a[row][col]);
                System.out.print(" ");
            }
            System.out.println();
        }

    }
}

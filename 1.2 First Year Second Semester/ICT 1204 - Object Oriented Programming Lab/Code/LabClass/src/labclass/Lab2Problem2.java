package labclass;

import java.util.Scanner;

public class Lab2Problem2 {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int num[] = new int[10];
        int i, sum = 0;

        System.out.print("Enter Name : ");
        String name = input.nextLine();
        System.out.println("Enter Ten numbers : ");

        for (i = 0; i < num.length; i++) {
            num[i] = input.nextInt();
            sum = sum + num[i];
        }

        double average = sum / 10.0;
        System.out.println("Your name : " + name);
        System.out.println("Average " + average);

    }

}

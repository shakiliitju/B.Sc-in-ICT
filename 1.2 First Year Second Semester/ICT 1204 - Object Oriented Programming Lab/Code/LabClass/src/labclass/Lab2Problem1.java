package labclass;

import java.util.Scanner;

public class Lab2Problem1 {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        System.out.print("Enter Name : ");
        String name = input.nextLine();
        System.out.println("Enter Three numbers : ");
        int marks1 = input.nextInt();
        int marks2 = input.nextInt();
        int marks3 = input.nextInt();

        double average = (marks1 + marks2 + marks3) / 3.0;
        System.out.println("Your name : " + name);
        System.out.println("Average " + average);
    }

}

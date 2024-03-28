package finallab;

import java.util.Scanner;

public class employee {

    String name, designation;
    int age, salary;

    public void getData() {

        System.out.println("Detail of a employee:");
        System.out.println("-------------------------");

        System.out.println("Name : " + name);
        System.out.println("Age: " + age);

        System.out.println("Designation: " + designation);
        System.out.println("Salary: " + salary);

    }

    void putData() {
        System.out.println("Detail of a employee:");
        System.out.println("-------------------------");

        Scanner input = new Scanner(System.in);
        System.out.print("Enter Name : ");
        String na = input.nextLine();
        System.out.println("Enter Three numbers : ");
        int age = input.nextInt();
        int designation = input.nextInt();
        int salary = input.nextInt();

    }

   public static void main(String[] args) {
      
        Scanner input = new Scanner(System.in);

        int age = input.nextInt();
        employee[] arr = null;
         for (int i = 0; i < 3; i++) {
           arr[i]=new employee();
         }
    employee na = new employee();
        for (int i = 0; i < 3; i++) {
           arr[i].getData(); 
        }
        for (int i = 0; i < 3; i++) {
            arr[i].putData();
        }
    }
}

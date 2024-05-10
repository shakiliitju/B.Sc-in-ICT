package labclass;

public class Lab1Problem3 {

    int stuID;
    String stuName;
    int stuAge;

    Lab1Problem3() {
        stuID = 100;
        stuName = "Mubtasim";
        stuAge = 12;
    }

    Lab1Problem3(int num1, String str, int num2) {

        stuID = num1;
        stuName = str;
        stuAge = num2;
    }

    public int getStuID() {

        int stID = stuID;
        return stID;
    }

    public String getStuName() {
        String stName = stuName;
        return stName;
    }

    public int getStuAge() {
        int stAge = stuAge;
        return stAge;
    }

    public static void main(String args[]) {

        Lab1Problem3 myobj = new Lab1Problem3();
        System.out.println("Student Name is: " + myobj.getStuName());
        System.out.println("Student Age is: " + myobj.getStuAge());
        System.out.println("Student ID is: " + myobj.getStuID());

        Lab1Problem3 myobj2 = new Lab1Problem3(555, "Chaitanya", 25);
        System.out.println("Student Name is: " + myobj2.getStuName());
        System.out.println("Student Age is: " + myobj2.getStuAge());
        System.out.println("Student ID is: " + myobj2.getStuID());
    }
}

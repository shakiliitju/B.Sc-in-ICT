package labclass;

public class Lab1Problem4 {

    int stuID;
    String stuName;
    int stuAge;

    Lab1Problem4() {

        stuID = 100;
        stuName = "Mubtasim";
        stuAge = 12;
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

        Lab1Problem4 myobj = new Lab1Problem4();
        System.out.println("Student Name is: " + myobj.getStuName());
        System.out.println("Student Age is: " + myobj.getStuAge());
        System.out.println("Student ID is: " + myobj.getStuID());

    }
}

package labclass;

public class Lab8Problem1 {

    public void show() {
        System.out.println("Base::show() called");
    }
};

class Derived extends Lab8Problem1 {

    public void show() {
        System.out.println("Derived::show() called");
    }

    public static void main(String[] args) {

        Lab8Problem1 b = new Lab8Problem1();
        b.show();
        
       
    }
}

package lectureSheet;

public class NewClass1 {

    public void show() {
        System.out.println("Base::show() called");
    }
};

class Derived extends NewClass1 {

    public void show() {
        System.out.println("Derived::show() called");
    }

    public static void main(String[] args) {

        NewClass1 b = new NewClass1();
        b.show();

    }
}

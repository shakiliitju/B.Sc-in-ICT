package lectureSheet;

public class Animal1 {

    void eat() {

        System.out.println("eating...");
    }
}

class Dog1 extends Animal1 {

    void bark() {
        System.out.println("barking...");
    }
}

class BabyDog1 extends Dog1 {

    void weep() {
        System.out.println("weeping...");
    }
}

class TestInheritance1 {

    public static void main(String[] args) {

        BabyDog1 d = new BabyDog1();

        d.weep();
        d.bark();
        d.eat();
    }

}

package labclass;

class Test extends Thread {

    @Override
    public void run() {
        System.out.println("Run method executed by user child thread");
    }
}

public class Lab6Problem1 {

    public static void main(String[] args) {
        Test t = new Test();
        t.run();
        System.out.println("Main method by main Thread");
        t.start();

    }

}

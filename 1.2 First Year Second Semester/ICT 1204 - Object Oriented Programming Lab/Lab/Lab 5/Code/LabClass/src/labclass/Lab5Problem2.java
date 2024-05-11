package labclass;

class Ex2 extends Thread {

    @Override
    public void run() {
        System.out.println("Run method executed by user child thread");
    }
}

public class Lab5Problem2 {

    public static void main(String[] args) {
        Ex2 t1 = new Ex2();
        t1.start();
        System.out.println("Main method executed by main thread");
    }

}

package labclass;

class Ex3 implements Runnable {

    @Override
    public void run() {
        System.out.println("Run method executed by user child thread");
    }
}

public class Lab5Problem3 {

    public static void main(String[] args) {
        Ex3 t = new Ex3();
        Thread t1 = new Thread(t);
        t1.start();
        System.out.println("Main method is execute by MAin thread");
    }

}

package labclass;

class Ex1 extends Thread {

    @Override
    public void run() {
        for (int i = 20; i < 25; i++) {
            try {
                Thread.sleep(500);
            } catch (InterruptedException e) {
                System.out.println("error");
            }
            System.out.println(i);
        }
    }
}

public class Lab5Problem1 {

    public static void main(String[] args) {
        Ex1 t1 = new Ex1();
        Ex1 t2 = new Ex1();
        t1.start();
        t2.start();
    }

}

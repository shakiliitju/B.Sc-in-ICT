package labclass;

class T extends Thread {

    @Override
    public void run() {
        for (int i = 20; i <25; i++) {
            try {
                Thread.sleep(500);
            } catch (InterruptedException ex) {
                System.out.println("error");
            }
            System.out.println(i);
        }
    }
}

public class Lab6Problem3 {

    public static void main(String[] args) {
        T t1 = new T();
        T t2 = new T();
        T t3 = new T();
        t1.start();
        try {
            t1.join();
        } catch (InterruptedException ex) {
            System.out.println("error again");
        }
        t2.start();
        t3.start();
    }
}

package labclass;

class Tes extends Thread {

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

public class Lab6Problem2 {

    public static void main(String[] args) {
        Tes t1 = new Tes();
        Tes t2 = new Tes();
        Tes t3 = new Tes();
        t1.start();
        try {
            t1.join(1500);
        } catch (InterruptedException ex) {
            System.out.println("error again");
        }
        t2.start();
        t3.start();

    }

}

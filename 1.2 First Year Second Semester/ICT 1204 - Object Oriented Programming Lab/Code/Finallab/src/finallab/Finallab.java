package finallab;

public class Finallab {

    public static void main(String[] args) {

        Finallab p = new Finallab();

    }
    int x = 1;
    private int x_pri = 2;
    protected int x_pro = 3;
    public int x_pub = 4;

    public Finallab() {

        System.out.println("n = " + x);
        System.out.println("n_pri = " + x_pri);
        System.out.println("n_pro = " + x_pro);
        System.out.println("n_pub = " + x_pub);
    }
}

class subclass extends Finallab {

    public static void main(String[] args) {

        Finallab p = new Finallab();

        System.out.println("");
        System.out.println("n = " + p.x);
        //System.out.println(x.n_pri);
        System.out.println("n_pro = " + p.x_pro);
        System.out.println("n_pub = " + p.x_pub);
    }
}

class Non {

    public static void main(String[] args) {

        Finallab p = new Finallab();

        System.out.println("");
        System.out.println("n = " + p.x);
        //System.out.println("n_pri = " + p.n_pri);
        System.out.println("n_pro = " + p.x_pro);
        System.out.println("n_pub = " + p.x_pub);

    }
}

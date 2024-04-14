package lectureSheet;

public class Protection {

    int n = 1;
    private int n_pri = 2;
    protected int n_pro = 3;
    public int n_pub = 4;

    public static void main(String[] args) {

        Protection p = new Protection();

        System.out.println("base constructor");
        System.out.println("n = " + p.n);
        System.out.println("n_pri = " + p.n_pri);
        System.out.println("n_pro = " + p.n_pro);
        System.out.println("n_pub = " + p.n_pub);
    }

}

class Non extends Protection {

    public static void main(String[] args) {

        Protection x = new Protection();

        System.out.println("Same package subclass");
        //System.out.println(x.n_pri);
        System.out.println("n = " + x.n);
        System.out.println("n_pro = " + x.n_pro);
        System.out.println("n_pub = " + x.n_pub);

    }

}

class SamePackage {

    public static void main(String[] args) {

        Protection y = new Protection();

        System.out.println("Same packeg non subclass");
        //System.out.println("n_pri = " + y.n_pri);
        System.out.println("n = " + y.n);
        System.out.println("n_pro = " + y.n_pro);
        System.out.println("n_pub = " + y.n_pub);

    }
}

package p2;

public class OtherPackage {

    public static void main(String[] args) {

        p1.Protection p = new p1.Protection();

        System.out.println("Different packeg non subclass");
        //System.out.println("n_pri = " + p.n_pri);
        //System.out.println("n = " + p.n);
        //System.out.println("n_pro = " + p.n_pro);
        System.out.println("n_pub = " + p.n_pub);

    }

}

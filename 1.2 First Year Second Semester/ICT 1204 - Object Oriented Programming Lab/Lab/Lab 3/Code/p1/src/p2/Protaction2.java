package p2;

class Protection2 extends p1.Protection {

    public static void main(String[] args) {

        p1.Protection y = new p1.Protection();

        System.out.println("Different package subclass");
        //System.out.println("n_pri = " + y.n_pri);
        //System.out.println("n = " + y.n);
        System.out.println("n_pro = " + y.n_pro);
        System.out.println("n_pub = " + y.n_pub);

    }
}

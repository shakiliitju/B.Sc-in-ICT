package p1;

class SamePackage {

    public static void main(String[] args) {

        Protection p = new Protection();

        System.out.println("Same packeg non subclass");
        System.out.println("n = " + p.n);
        //System.out.println("n_pri = " + p.n_pri);
        System.out.println("n_pro = " + p.n_pro);
        System.out.println("n_pub = " + p.n_pub);

    }
}

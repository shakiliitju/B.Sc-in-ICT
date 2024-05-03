package p1;

class Derived extends Protection {

    public static void main(String[] args) {

        Protection x = new Protection();

        System.out.println("Same package subclass");
        System.out.println("n = " + x.n);
        //System.out.println(x.n_pri);
        System.out.println("n_pro = " + x.n_pro);
        System.out.println("n_pub = " + x.n_pub);

    }

}

package labclass;

public class Lab1Problem1 {

    double height, width, depth;
    double vol;

    Lab1Problem1(double h, double w, double d) {
        height = h;
        width = w;
        depth = d;

    }

    double volume() {

        vol = height * width * depth;
        return vol;

    }

    public static void main(String[] args) {

        Lab1Problem1 mybox1 = new Lab1Problem1(5, 4, 2);
        Lab1Problem1 mybox2 = new Lab1Problem1(5, 3, 2);
        double vol;

        vol = mybox1.volume();
        System.out.println(vol);

        vol = mybox2.volume();
        System.out.println(vol);

    }

}

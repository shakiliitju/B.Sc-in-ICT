package labclass;

public class Lab1Problem2 {

    double height, width, depth;
    double volume;
    double area;

    Lab1Problem2(double h, double w) {
        height = h;
        width = w;

    }

    Lab1Problem2(double h, double w, double d) {
        height = h;
        width = w;
        depth = d;

    }

    double area() {

        area = height * width;
        return area;

    }

    double volume() {

        volume = height * width * depth;
        return volume;

    }

    public static void main(String[] args) {

        Lab1Problem2 mybox1 = new Lab1Problem2(5, 4, 2);
        Lab1Problem2 mybox2 = new Lab1Problem2(5, 3, 2);
        Lab1Problem2 mybox3 = new Lab1Problem2(5, 4);
        Lab1Problem2 mybox4 = new Lab1Problem2(5, 3);
        double vol, areaB;

        areaB = mybox1.area();
        System.out.println(areaB);

        areaB = mybox2.area();
        System.out.println(areaB);

        vol = mybox1.volume();
        System.out.println(vol);

        vol = mybox2.volume();
        System.out.println(vol);

    }

}

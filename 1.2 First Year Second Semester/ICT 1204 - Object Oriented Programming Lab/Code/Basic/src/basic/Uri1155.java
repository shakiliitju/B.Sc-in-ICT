package basic;

public class Uri1155 {

    public static void main(String[] args) {

        double i, sum = 0;
        for (i = 1; i <= 100; i++) {
            sum += 1 / i;
        }
        System.out.printf("%.2f\n", sum);
    }

}

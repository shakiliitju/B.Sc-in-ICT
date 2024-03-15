package basic;

public class Uri1156 {

    public static void main(String[] args) {

        double i, a = 1, b, sum = 0;
        
        for (i = 1; i <= 39; i += 2) {
            b = i / a;
            sum += b;
            a *= 2;
        }
        System.out.printf("%.2f\n", sum);
    }

}

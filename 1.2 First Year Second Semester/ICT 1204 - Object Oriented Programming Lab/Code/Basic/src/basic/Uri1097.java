package basic;

public class Uri1097 {

    public static void main(String[] args) {

        int i, j, k, a = 7;
        for (i = 1; i <= 9; i += 2) {
            for (k = 1, j = a; k <= 3; j--, k++) {
                System.out.printf("I=%d J=%d\n", i, j);
            }
            a += 2;
        }
    }

}

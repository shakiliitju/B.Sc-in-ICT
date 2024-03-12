package basic;

import java.util.Scanner;

public class Uri1080 {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int x = 0, i, max, temp, count = 0;
        for (i = 0; i < 10; i++) {
            x = input.nextInt();
        }
        max = x;
        for (i = 0; i < 10; i++) {
            if (max < x) {
                temp = max;
                max = x;
                x = temp;
                count = i + 1;
            }
        }
        System.out.printf("%d\n", max);
        System.out.printf("%d\n", count);
    }

}

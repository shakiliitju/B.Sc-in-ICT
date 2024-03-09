
package basic;

import java.util.Scanner;

public class Uri1019 {
    
    public static void main(String[] args) {
        
        Scanner input = new Scanner(System.in);
        
        int a,h,m,s;
    a = input.nextInt();

    h = (a/60)/60;
    m = (a/60)%60;
    s = (a%60)/1;
    
        System.out.printf("%d:%d:%d\n",h,m,s);
    }
}

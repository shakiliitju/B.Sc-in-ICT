
package basic;


public class NewClass {
    
    public static void main(String[] args) {
        
        int x = 3;
        int y = 2;
 
        x += y; // x = x + y = 3 + 2 = 5
        System.out.println("X = "+x);
        
        x -= y; // x = x - y = 5 - 2 = 3
        System.out.println("X = "+x);
        
        x *= y; // x = x * y = 3 * 2 = 6
        System.out.println("X = "+x);
        
        x /= y; // x = x / y = 6 / 2 = 3
        System.out.println("X = "+x);
        
        x %= y; // x = x % y = 3 % 2 = 1
        System.out.println("X = "+x);
        
    }
    
}

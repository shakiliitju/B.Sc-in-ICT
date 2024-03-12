
package basic;

import java.util.Scanner;

public class Uri1071 {
    
    public static void main(String[] args) {
        
        Scanner input = new Scanner(System.in);
        
        int x,y,sum=0,temp;
        x = input.nextInt();
        y = input.nextInt();
        if(x>y)
        {
            temp = x;
            x = y;
            y = temp;
        }
    for(int i=x+1; i<y; i++)
    {
        if(i%2!=0)
            sum += i;
    }
        System.out.printf("%d\n",sum);
    }
    
}

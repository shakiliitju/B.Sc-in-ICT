
import java.util.Scanner;

public class Uri {
    
    public static void main(String[] args) {
        
        Scanner input = new Scanner(System.in);
        
     int time, speed;
     double liters;
    
      
        time = input.nextInt();
         speed = input.nextInt();
     
         liters = (time * speed)/12.0;
          System.out.printf("%.3f\n",liters);
          
}
}

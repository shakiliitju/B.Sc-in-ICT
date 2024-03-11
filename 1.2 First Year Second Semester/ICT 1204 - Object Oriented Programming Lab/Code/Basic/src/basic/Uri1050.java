
package basic;

import java.util.Scanner;


public class Uri1050 {
    
    public static void main(String[] args) {
        
        Scanner input = new Scanner(System.in);
        
        int X;
        
        X = input.nextInt();
        
         if(X==61)
            System.out.println("Brasilia");
    else if(X==71)
            System.out.println("Salvador");
    else if(X==11)
            System.out.println("Sao Paulo");
          else if(X==21)
            System.out.println("Rio de Janeiro");
    else if(X==32)
            System.out.println("Juiz de Fora");
          else if(X==19)
            System.out.println("Campinas");
    else if(X==27)
            System.out.println("Vitoria");
          else if(X==31)
            System.out.println("Belo Horizonte");
    else
            System.out.println("DDD nao cadastrado");
         

    }
    
}
package labclass;

import java.io.FileWriter;
import java.io.IOException;

public class Lab4Problem1 {

    public static void main(String[] args) {

        try {
            FileWriter file = new FileWriter("output.txt");
            file.write("MD Mahbubur Rahman");
            file.close();
        } catch (IOException e) {
            System.out.println("Input Error");
        }

    }

}

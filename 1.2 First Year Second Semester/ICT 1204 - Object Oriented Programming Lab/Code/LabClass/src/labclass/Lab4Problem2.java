package labclass;

import java.io.FileWriter;
import java.io.IOException;

public class Lab4Problem2 {

    public static void main(String[] args) throws IOException {

        FileWriter file = new FileWriter("output.txt");
        file.write("My name is MD Shakil Hossain");
        file.close();
    }

}

package lectureSheet;

import java.io.*;
import java.net.*;

public class URLDemo2 {

    public static void main(String[] args) {

        try {

            URL url = new URL("http://www.amrood.com/index.htm?language=en#j2se");

            System.out.println("URL is : " + url.toString());
            System.out.println("Protocol is : " + url.getProtocol());
            System.out.println("Authority is : " + url.getAuthority());
            System.out.println("Host Name is : " + url.getHost());
            System.out.println("Port Number is : " + url.getPort());
            System.out.println("File Name is : " + url.getFile());
            System.out.println("Path is : " + url.getPath());
            System.out.println("Default port is : " + url.getDefaultPort());
            System.out.println("Query is : " + url.getQuery());
            System.out.println("Ref is : " + url.getRef());
        } catch (Exception e) {
            e.printStackTrace();
        }

    }

}

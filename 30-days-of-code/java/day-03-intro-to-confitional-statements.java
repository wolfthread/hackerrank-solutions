import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        int N = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");
        // Begin Solution
        //---------------------------------------------------------------------------------------
        String w = "Weird";
        String nw = "Not Weird";

        if (N % 2 != 0) {
            System.out.println(w);
        } else if (N >= 2 && N <= 5) {
            System.out.println(nw);
        } else if (N >= 6 && N <= 20) {
            System.out.println(w);
        } else {
            System.out.println(nw);
        }
        //---------------------------------------------------------------------------------------
        // End Solution
        scanner.close();
    }
}

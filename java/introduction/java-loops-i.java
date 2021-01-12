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
        int sum;
        for (int i = 1; i < 11; i++) {
            sum = N * i;
            System.out.println(String.format("%d x %d = %d", N, i, sum));
        }
        scanner.close();
    }
}

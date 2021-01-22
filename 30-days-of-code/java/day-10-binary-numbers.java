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
        int n = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");
        // Begin Solution
        //---------------------------------------------------------------------------------------
        int current_count = 0;
        int max_count = 0;
        for(int i=0; n>0; i++) {    
            if(n%2 == 1){
                current_count++;
            } else {
                current_count = 0;
            }
            if(current_count > max_count){
                max_count = current_count;
            };
            n = n/2;
        }
        System.out.println(max_count);
        //---------------------------------------------------------------------------------------
        // End Solution
        
        scanner.close();
    }
}

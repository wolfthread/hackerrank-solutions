import java.io.*;
import java.util.*;

public class Solution {

    // Begin Solution
    //---------------------------------------------------------------------------------------
    public static boolean isPrime(int n) {
        if (n <= 3) {
            return n > 1;
        }
        if (n % 2 == 0 || n % 3 == 0) {
            return false;
        }
        int i = 5;
        while (Math.pow(i, 2) <= n) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
        i += 6;
        }
        return true;
    }
    
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int T = in.nextInt();
        for (int i=0; i<T; i++) {
            int n = in.nextInt();
            if (isPrime(n)){
                System.out.println("Prime");
            }
            else {
                System.out.println("Not prime");
            } 
        }
        in.close();        
    }
    //---------------------------------------------------------------------------------------
    // End Solution
}
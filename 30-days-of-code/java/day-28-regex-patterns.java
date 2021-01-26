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
        // create a list to keep valid names
        ArrayList<String> keep = new ArrayList<String>();
        //---------------------------------------------------------------------------------------
        // End Solution


        for (int NItr = 0; NItr < N; NItr++) {
            String[] firstNameEmailID = scanner.nextLine().split(" ");
            String firstName = firstNameEmailID[0];
            String emailID = firstNameEmailID[1];

            // Begin Solution
            //---------------------------------------------------------------------------------------
            // create regex pattern and look for it in current emailID
            if (Pattern.compile(".+@gmail\\.com$").matcher(emailID).matches()) {
                keep.add(firstName);
            }
            //---------------------------------------------------------------------------------------
            // End Solution
        }

        // Begin Solution
        //---------------------------------------------------------------------------------------
        // sort names list
        Collections.sort(keep);
        // print names in sorted list
        for (int i = 0; i < keep.size(); i++) {
            System.out.println(keep.get(i));
        }
        //---------------------------------------------------------------------------------------
        // End Solution

        scanner.close();
    }
}

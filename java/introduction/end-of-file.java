import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        // Begin Solution
        //---------------------------------------------------------------------------------------
        Scanner scan = new Scanner(System.in);
        String currentLine;
        int count = 1;
        while(scan.hasNext()) {
            currentLine = scan.nextLine();
            System.out.printf("%d %s\n", count, currentLine);
            count++;
        }
        //---------------------------------------------------------------------------------------
        // End Solution
    }
}
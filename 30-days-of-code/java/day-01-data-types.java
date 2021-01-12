import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
	
    public static void main(String[] args) {
        int i = 4;
        double d = 4.0;
        String s = "HackerRank ";
		
        Scanner scan = new Scanner(System.in);

        /* Declare second integer, double, and String variables. */
        int my_int;
        double my_double;
        String my_string;

        /* Read and save an integer, double, and String to your variables.*/
        // Note: If you have trouble reading the entire String, please go back and review the Tutorial closely.
        my_int = scan.nextInt();
        my_double = scan.nextDouble();
        scan.nextLine();
        my_string = scan.nextLine();
        
        /* Print the sum of both integer variables on a new line. */
        System.out.println(i + my_int);
        
        /* Print the sum of the double variables on a new line. */
        System.out.println(d + my_double);
        
        /* Concatenate and print the String variables on a new line; 
        	the 's' variable above should be printed first. */
        System.out.println(s + my_string);

        scan.close();
    }
}
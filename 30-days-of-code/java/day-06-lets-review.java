import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        // Begin Solution
        //---------------------------------------------------------------------------------------
        int nb_tests;
        Scanner scan = new Scanner(System.in);
        nb_tests = scan.nextInt();
        scan.nextLine();
        for (int i=0; i<nb_tests; i++) {
            String my_string;
            String left_side = "";
            String right_side = "";
            my_string = scan.nextLine();
            char[] myCharArray = my_string.toCharArray();
            for (int j=0; j<my_string.length();j++){
                if (j % 2 == 0) {
                    left_side += myCharArray[j];
                } else {
                    right_side += myCharArray[j];
                };
            };
            System.out.println(String.format("%s%s%s", left_side, " ", right_side));
        }
        //---------------------------------------------------------------------------------------
        // End Solution
    }
}
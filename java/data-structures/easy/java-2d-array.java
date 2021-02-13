import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;
import java.util.Arrays;

public class Solution {

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        int[][] arr = new int[6][6];
        int maxSum = Integer.MIN_VALUE;
        for (int i = 0; i < 6; i++) {
            String[] arrRowItems = scanner.nextLine().split(" ");
            scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

            for (int j = 0; j < 6; j++) {
                int arrItem = Integer.parseInt(arrRowItems[j]);
                arr[i][j] = arrItem;
            }
        }
        // Begin Solution
        //---------------------------------------------------------------------------------------
        // moving hourglass from left to right, then top to bottom
        for (int move_ver = 0; move_ver < 4; move_ver ++) {
            for (int move_hor = 0; move_hor < 4; move_hor ++) {
                int sum = 0;
                // adding a counter check since 4th entry and 6th entry not counted
                int counter = 1;
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        if (counter != 4 && counter != 6){
                            sum += arr[i + move_ver][j + move_hor];
                        }
                        counter += 1;
                    }
                }
                if (sum > maxSum) {
                    maxSum = sum;
                }
            }
        }
        System.out.println(maxSum);
        //---------------------------------------------------------------------------------------
        // End Solution        
        scanner.close();
    }
}

import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] a = new int[n];
        for(int a_i=0; a_i < n; a_i++){
            a[a_i] = in.nextInt();
        }
        int numberOfSwaps = 0;
        int endPosition = a.length - 1;
        int swapPosition;
        while( endPosition > 0 ) {
            swapPosition = 0;
            for(int i = 0; i < endPosition; i++) {
                if( a[i] > a[i + 1] ){
                    int tmp = a[i];
                    a[i] = a[i + 1];
                    a[i + 1] = tmp;
                    numberOfSwaps += 1;
                    swapPosition = i;
                }
            }
            endPosition = swapPosition;
        }
        System.out.println(String.format("%s%d%s", "Array is sorted in ", numberOfSwaps, " swaps."));
        System.out.println(String.format("%s%d", "First Element: ", a[0]));
        System.out.println(String.format("%s%d", "Last Element: ", a[a.length - 1]));
    }
}
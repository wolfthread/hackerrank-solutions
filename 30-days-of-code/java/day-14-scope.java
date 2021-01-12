import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;


class Difference {
  	private int[] elements;
  	public int maximumDifference;

	// Add your code here
    public Difference(int[] elements) {
            this.elements = elements;
    }
    void computeDifference() {
        int maxAbsolute = 0;
        int currDiff;
        for (int i = 0; i < this.elements.length; i++) {
            for(int j = 0; j < this.elements.length; j++) {
                currDiff = Math.abs(elements[i] - elements[j]);
                if (currDiff > maxAbsolute) {
                    maxAbsolute = currDiff;
                }
            }
        }
        maximumDifference = maxAbsolute;
    }
} // End of Difference class

public class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }
        sc.close();

        Difference difference = new Difference(a);

        difference.computeDifference();

        System.out.print(difference.maximumDifference);
    }
}
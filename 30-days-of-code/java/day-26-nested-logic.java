import java.io.*;
import java.util.*;

public class Solution {
    // Begin Solution
    //---------------------------------------------------------------------------------------
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String r = in.nextLine();
        String b = in.nextLine();
        String[] borrowed = b.split(" ");
        int dayOut = Integer.parseInt(borrowed[0]);
        int monthOut = Integer.parseInt(borrowed[1]);
        int yearOut = Integer.parseInt(borrowed[2]);
        String[] returned = r.split(" ");
        int dayIn = Integer.parseInt(returned[0]);
        int monthIn = Integer.parseInt(returned[1]);
        int yearIn = Integer.parseInt(returned[2]);
        int fineDay = 15;
        int fineMonth = 500;
        int fineYear = 10000;
        if (yearIn == yearOut) {
            if (monthIn == monthOut) {
                if (dayIn > dayOut) {
                    System.out.println(String.format("%d", (dayIn - dayOut) * fineDay));
                } else {
                    System.out.println(0);
                }
            } else if (monthIn > monthOut) {
                System.out.println(String.format("%d", (monthIn - monthOut) * fineMonth));
            } else {
                System.out.println(0);
            }
        } else if (yearIn > yearOut) {
            System.out.println(String.format("%d", fineYear));
        } else {
            System.out.println(0);
        }
        in.close();
    }
    //---------------------------------------------------------------------------------------
    // End Solution                    
}
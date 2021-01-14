import java.io.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String S = in.next();
        try {
            int converted = Integer.parseInt(S);
            System.out.println(converted);
        } catch(NumberFormatException e) {
            System.out.println("Bad String");
        }
    }
}
import java.util.*;
import java.io.*;

// We use a, b and n to create the following series:
// (a + 2^0 * b), (a + 2^0 * b + 2^1 * b),...,(a + 2^0 * b + 2^1 * b + ... + 2^n-1 * b)

class Solution{
    public static void main(String []argh){
        Scanner in = new Scanner(System.in);
        int t=in.nextInt();
        for(int i=0;i<t;i++){
            int a = in.nextInt();
            int b = in.nextInt();
            int n = in.nextInt();
            int currCalc = a;
            for(int j = 0; j < n; j++) {
                currCalc += Math.pow(2,j) * b;
                System.out.print(String.format("%d ", currCalc));
            };
            System.out.println("");
        };
        in.close();
    }
}
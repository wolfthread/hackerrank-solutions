import java.util.*;
import java.io.*;



class Solution{
    public static void main(String []argh)
    {
        Scanner sc = new Scanner(System.in);
        int t=sc.nextInt();
        for(int i=0;i<t;i++)
        {
            try
            {
                long x=sc.nextLong();
                System.out.println(x+" can be fitted in:");
                // Begin Solution
                //---------------------------------------------------------------------------------------
                byte byteSize = 127;
                short shortSize = 32767;
                int intSize = 2147483647;
                long longSize = 9223372036854775807L;
                if (x >= -(byteSize + 1) && x <= byteSize) {
                  System.out.println("* byte");
                }
                if (x >= -(shortSize + 1) && x <= shortSize) {
                  System.out.println("* short");
                } 
                if (x >= -(intSize + 1) && x <= intSize) {
                  System.out.println("* int");
                }
                if (x >= -(longSize + 1) && x <= longSize) {
                  System.out.println("* long");
                }
                //---------------------------------------------------------------------------------------
                // End Solution                
            }
            catch(Exception e)
            {
                System.out.println(sc.next()+" can't be fitted anywhere.");
            }

        }
    }
}




import java.util.*;
import java.io.*;

class Solution{
    public static void main(String []argh){
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        // Begin Solution
        //---------------------------------------------------------------------------------------
        Map<String,String> m = new HashMap<String,String>();
        //---------------------------------------------------------------------------------------
        // End Solution

        for(int i = 0; i < n; i++){
            String name = in.next();
            int phone = in.nextInt();
            // Begin Solution
            //---------------------------------------------------------------------------------------
            m.put(name, Integer.toString(phone));
            //---------------------------------------------------------------------------------------
            // End Solution

        }
        while(in.hasNext()){
            String s = in.next();
            // Begin Solution
            //---------------------------------------------------------------------------------------
            if (m.containsKey(s)) {
                System.out.println(String.format("%s%s%s", s, "=", m.get(s)));
            } else {
                System.out.println("Not found");
            }
            //---------------------------------------------------------------------------------------
            // End Solution
        }
        in.close();
    }
}
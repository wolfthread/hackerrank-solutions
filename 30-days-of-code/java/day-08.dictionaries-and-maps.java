//Complete this code or write your own from scratch
import java.util.*;
import java.io.*;

class Solution{
    public static void main(String []argh){
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        Map<String,String> m = new HashMap<String,String>();
        for(int i = 0; i < n; i++){
            String name = in.next();
            int phone = in.nextInt();
            m.put(name, Integer.toString(phone));
        }
        while(in.hasNext()){
            String s = in.next();
            if (m.containsKey(s)) {
                System.out.println(String.format("%s%s%s", s, "=", m.get(s)));
            } else {
                System.out.println("Not found");
            }
        }
        in.close();
    }
}
import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        
         Scanner sc = new Scanner(System.in);

            int n = sc.nextInt();
            int m = sc.nextInt();
            ArrayList<Integer> arr = new ArrayList<Integer>(10);
            ArrayList<Integer> num = new ArrayList<Integer>(n);
            ArrayList<Integer> ind = new ArrayList<Integer>(m);
            for (int i = 0; i < n; i++) {
                num.add(sc.nextInt());}
                for (int j = 0; j < m; j++) {
                    ind.add(sc.nextInt());
                }
                for (int j = 0; j < n; j++) {
                    arr.add(ind.get(j), num.get(j));
                }

            for (int i = 0; i < m; i++) {
                System.out.print(arr.get(i)+" ");
            }
    
    }
}

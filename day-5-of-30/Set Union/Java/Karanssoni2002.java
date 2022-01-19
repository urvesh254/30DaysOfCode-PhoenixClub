import java.io.*;
import java.util.*;

public class Solution {
   
    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
         HashSet <Integer> set1=new HashSet();
        
     
        for(int i =0;i<n; i++){
          int b = sc.nextInt();
            set1.add(b);
        }
        for(int i =0;i<m; i++){
            int b = sc.nextInt();
            set1.add(b);
        }
      
        int a = set1.size();
        System.out.println(a);
    }
}
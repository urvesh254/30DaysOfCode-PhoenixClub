import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        int s = 0;
        int m =1;
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int n = sc.nextInt();
       while(n>0){
           s = s+(n%10);
           m= m*(n%10);
           n = n/10;
       }
        System.out.println(m-s);
    }
}

import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
         int count = 0;
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String a = Integer.toBinaryString(n);
        for (int i = 0; i < a.length(); i++) {
            if(a.charAt(i) == '1'){
                count++;
            }
        }
        System.out.println(count);
    }
}
import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        int count = 0;
        int q =0;
        int n = sc.nextInt();
        int len = String.valueOf(n).length();
        int a = n*n;
        if(len == 1){
            int b = a%10;
            if(b == n){
            count ++;
            }
        }
        else{
            int b = a%100;
            if(b == n){
            count ++;
            }
        }
        if (count == 0){
            System.out.println("Not a phoenix number.");    
        }
        else
        {
              System.out.println("Phoenix number");    
        }
        
    }
}
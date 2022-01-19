import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        
        int flag = 0;
        Scanner sc = new Scanner(System.in);
         int n = sc.nextInt();
        for(int i =0; i<n;i++){
            int count = 0;
           int a = sc.nextInt();
            while(a != 0)  
            {  
                a = a/10;
                count = count + 1;  
            }
            if (count % 2 == 0){
               flag++;
        }
    }
        System.out.println(flag);
}
}
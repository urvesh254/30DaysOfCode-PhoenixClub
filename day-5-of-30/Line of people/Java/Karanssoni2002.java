import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        int z,count =1;
        int n = sc.nextInt();
        int a = sc.nextInt();
        int b = sc.nextInt();
        
        for(int i =1;i<n-a;i++){
            if(count<=b){
                count++;
            }
        }
        System.out.println(count);
        
    }
}

import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
         Scanner sc = new Scanner(System.in);
        int sum1 = 0,j;
        int n = sc.nextInt();
        int k = sc.nextInt();
        int[] arr = new int[n];
        for(int i =0; i<n ; i++){
            arr[i] = sc.nextInt();
        }
        for(int i =0; i<n-4; i++){
          j = i+1;
            int count = 0;
            int sum = 0;
                while(count!=4){
                    sum = sum + arr[j];
                    j++;
                    count++;
                }
                if(sum>sum1){
                    sum1 = sum;
                }
                
            }
        System.out.println(sum1);
        
    }
}

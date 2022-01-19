import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
             Scanner sc = new Scanner(System.in);
            int n = sc.nextInt();
            int[] arr = new int[n];
            for (int i = 0; i < n; i++) {
                arr[i] = sc.nextInt();
            }
            int k = sc.nextInt();
            int count = 0;
            int i=0;
            if(i==0) {
                if(arr[i+1]==0 && arr[i]==0) {
                    arr[i]=1;
                    count++;
                }
            }
            for ( i = 1; i < n-1; i++) {
                if (arr[i] == 0) {
                    if(arr[i-1]==0 && arr[i+1]==0){
                        count++;
                        arr[i] = 1;
                    }
                }
            }
            if(i==n-1) {
                if(arr[i-1]==0 && arr[i]==0 ) {
                    arr[i]=1;
                    count++;
                }
            }
          
            if(count ==k) {
                System.out.println("true");
            }
            else{
                System.out.println("false");
            
            }
            
    }
}
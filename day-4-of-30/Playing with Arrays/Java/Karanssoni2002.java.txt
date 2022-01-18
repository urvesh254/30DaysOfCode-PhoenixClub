import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        int a;
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int[n];
        int arr1[] = new int[n];
            for(int i = 0; i<n; i++){
                arr[i] = sc.nextInt();
            }
         for(int i = 0;i<n;i++){
                 if(i == 0){
                arr1[i] = arr[i];
                 }
                else{
                    arr1[i] = arr1[i-1] + arr[i];
                }
                 
            
             }    
        for(int i = 0;i<n;i++){
              System.out.print(arr1[i]+ " ");
             }
    }
             
    
}
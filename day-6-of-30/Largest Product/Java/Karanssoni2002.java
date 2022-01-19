import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        int max1,max = 1;
        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i =0; i<n ; i++){
            arr[i] = sc.nextInt();
        }
        
        for(int i =0; i<n ; i++){
            for(int j =1; j<n ; j++){
                if(i == j){
                    continue;
                }
              else{
                 max1 = arr[i]*arr[j];
                  if(max1>max){
                      max = max1;
                  }
              }
            
         }
        }
        System.out.println(max);
    }
}
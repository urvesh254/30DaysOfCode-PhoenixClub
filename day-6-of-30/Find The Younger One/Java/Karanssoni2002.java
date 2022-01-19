import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        int[] arr1 = new int[n];
        for(int i =0; i<n ; i++){
            arr[i] = sc.nextInt();
        }
        for(int i =0; i<n ; i++){
            int count = 0;
            for(int j = 0; j<n ; j++){
                if(i == j){
                    continue;
                }
              else if(arr[i] > arr[j]){
                  count++;
              }
            }
            arr1[i] = count;
        }
        for(int i =0; i<n ; i++){
            System.out.print(arr1[i] + " ");
        }
        
    }
}
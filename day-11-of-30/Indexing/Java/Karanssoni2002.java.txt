import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        int sum =0,sum1 =0;
        int count =0;
        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i =0 ; i<n;i++){
            arr[i] = sc.nextInt();
        }
        for(int i = 0;i<n/2;i++){
            sum = sum + arr[i];
        }
        for(int i = n-1;i>n/2;i--){
            sum1 = sum1 + arr[i];
        }
        for(int i =0;i<n/2;i++){
            for(int j =(n-1);j>n/2;j--){
        if(sum == sum1){
            // System.out.println(i);
            count++;
            break;
        }
                 else{
                     sum = sum -arr[i];
                     sum1 = sum1 - arr[j];
                 }
        }
        }
        if(count == 0){
            System.out.println("-1");
        }
        else{
                        System.out.println(count);
        }
    }
}
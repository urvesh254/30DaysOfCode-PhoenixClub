import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        int min = 0;
        Scanner sc = new Scanner(System.in);
        int n  = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        for (int i = 0; i < n-1; i++) {
            for (int j = i+1; j <n ; j++) {
                if((arr[j]-arr[i]) > min){
                    min = arr[j]-arr[i];
                }
            }
        }
        System.out.println(min);
    }
}
import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
          Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int[n];
        int ans[] = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum = sum + arr[i];
            ans[i] = sum;
        }
        Arrays.sort(ans);
        if (ans[n - 1] < 0) {
            System.out.println(0);
        } else {
            System.out.println(ans[n - 1]);
        }
        
    }
}
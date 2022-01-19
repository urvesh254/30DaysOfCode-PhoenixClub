import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
          Scanner sc = new Scanner(System.in);
        int sum = 0, sum1 = 0;
        int count = 0;
        int z, a, b;
        int n = sc.nextInt();

        int[][] arr = new int[10][10];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 3; j++) {
                arr[i][j] = sc.nextInt();
            }
        }
        int t = sc.nextInt();
        int[] ans = new int[t + 1];
        for (int i = 0; i < n; i++) {
            a = arr[i][0];
            b = arr[i][1];
            if(a == b) {
                ans[a] = ans[a] + arr[i][2];
            }
            else {
                ans[a] = ans[a] + arr[i][2];
                ans[b] = ans[b] + arr[i][2];
            }
            while (a < b && (b - a) > 1) {
                b--;
                ans[b] = ans[b] + arr[i][2];

            }
        }
            for ( int i = 1; i < t + 1; i++) {
                System.out.print(ans[i] + " ");
            }
    }
}
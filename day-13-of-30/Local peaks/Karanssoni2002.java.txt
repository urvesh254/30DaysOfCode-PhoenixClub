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
        for (int i = 0; i <= n-1; i++) {
            if (i == 0) {
                if (arr[i] > arr[i + 1]) {
                    System.out.print(i + " ");
                }
            }
            for (i = 1; i < n - 1; i++) {
                if (arr[i - 1] < arr[i] && arr[i] > arr[i + 1]) {
                    System.out.print(i + " ");
                }

            }
            if (i == n - 1) {
                if (arr[i] > arr[i - 1]) {
                    System.out.print(i + "");
                }
            }
            }
    }
}
import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        int flag = 0;
        int n = sc.nextInt();
        int[] arr = new int[n];
        for(int i =0;i<n;i++){
            arr[i] = sc.nextInt();
        }
        int target = sc.nextInt();
        // Arrays.sort(arr);
        for(int i = 0;i<n;i++){
            if(arr[i] >= target){
                System.out.println(arr[i]);
                flag++;
                break;
            }
        }
        if(flag == 0){
            System.out.println("-1");
        }
    }
}
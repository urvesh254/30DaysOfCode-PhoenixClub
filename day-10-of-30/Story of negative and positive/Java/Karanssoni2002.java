import java.io.*;
import java.util.*;
import java.util.Arrays;
import java.util.Scanner;
import java.math.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
                
        int count = 0;
        int flag = 0;
        int temp =0;
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        Arrays.sort(arr);
        for (int i = 0; i < n; i++) {
            if(arr[i] == 0){
                System.out.println(0);
                count++;
                break;
            }
            for (int j = i+1 ; j < n; j++) {
                temp = Math.abs(arr[j]);
                if (temp == Math.abs(arr[i])) {
                    count++;
                    if(temp > flag)
                        flag = temp;

                }
            }
        }
            if (count == 0) {
                System.out.println("-1");
            } 
        if(flag!=0){
                System.out.println(flag);
            }
        }
}
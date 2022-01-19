import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
       
        int flag = 0;
        double c;
        int a = sc.nextInt();
        int b = sc.nextInt();
        int arr[] = new int[a];
        for(int i =0;i<a;i++){
            arr[i] = sc.nextInt();
        }
        c = Math.floor(a/b);
        
        for(int i =0;i<arr.length;i++){
             int count = 1;
            for(int j =i+1;j<arr.length;j++){
                if(arr[i] == arr[j]){
                    count++;
                }
            }
            if(count == 2){
                flag++;
            }
        }
        System.out.println(flag);
        
    }
}
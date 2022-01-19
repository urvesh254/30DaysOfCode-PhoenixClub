import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner input = new Scanner(System.in);
        int sum,z=0,avg,count = 0;
        int n = input.nextInt();
        int[] arr = new int[n];
        int k = input.nextInt();
        for(int i =0; i<n; i++){
            arr[i] = input.nextInt();
        }
        while(z!=arr.length){
            sum = 0;
            for(int i =0; i<arr.length; i++){
                if(i!=z){
                 sum = sum + arr[i];
		}
             }
            avg = sum/(n-1);
            if(avg == k){
            count++;
            break;
            }
            z++;
        }
        if(count == 1){
             System.out.println("true");
        }
        else{
             System.out.println("false");
        }
    }
}

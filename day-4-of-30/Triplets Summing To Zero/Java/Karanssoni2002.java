import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        int count = 0;      
        int n = sc.nextInt();
         int arr[] = new int[n];
        
        for(int i = 0; i<n ; i++){
             arr[i] = sc.nextInt();
        }
        
        for(int i = 0; i< n; i++){
            for(int j = i+1; j<n;j++){
                for(int z = j+1; z<n;z++){
                    if(arr[i] + arr[j] + arr[z] == 0){
                        count++;
                        break;
                    }
                }
            }
        }
        if(count == 0){
            System.out.println("false");
        }
        else{
             System.out.println("true");
        }
    }
}

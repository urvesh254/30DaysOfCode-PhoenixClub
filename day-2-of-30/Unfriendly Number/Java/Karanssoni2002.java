import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int count = 0;
        int i =0;
        int temp_arr[] = new int[5];
        while(n!=0){
            temp_arr[i] = n%10;
            n = n/10;
            i++;
        }
        int len = temp_arr.length;
            for(int j =0; j<len; j++){
                for(int z = j+1; z<len; z++){
                if(temp_arr[j] == temp_arr[z])
                {
                    count++;
                    
                }
            }
            }
          
        if(count==0){
            System.out.println("The number is lucky.");
        }
	else{
            System.out.println("The number is unlucky.");
        }
    }
}

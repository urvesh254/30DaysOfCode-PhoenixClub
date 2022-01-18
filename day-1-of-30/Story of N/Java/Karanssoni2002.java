import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int arr[]=new int[50];
        int i=1;
        int flag=0;
        while(flag!=50){
            int sum=0;
            int temp_value=i;
            while(i>0){
                sum+=i%10;
                i=i/10;
            }
            if(sum==11){
            arr[flag]=temp_value;
            flag++;
        
            }
            i=temp_value;
            i++;
        }
        System.out.println(arr[n-1]);
    }
    
}

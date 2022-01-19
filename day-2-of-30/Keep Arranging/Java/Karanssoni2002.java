import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
            float sum =0;
            float count = 1; 
            while(count!=n+1){
                sum = sum+(1/count);
                count++;
        }
        System.out.print("Harmonic sum upto 4 decimal places: ");
        System.out.format("%.4f",sum);
    }
}
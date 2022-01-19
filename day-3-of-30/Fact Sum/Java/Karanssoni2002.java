import java.io.*;
import java.util.*;

public class Solution {
    static int fact(int n){
        if(n==1){
            return n;
        }
        else if(n == 0){
            return 1;
        }
        else{
            return n * fact(n-1);
        }
    }

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        int sum = 0;
        int z;
        int a;
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int temp = n;
        while(n!=0){
            a = n%10;
            z = fact(a);
            sum = sum + z;
            n = n/10;
        }
        if (sum == temp){
            System.out.println("Yes");
        }
        else{
            System.out.println("No");
        }
    }
}
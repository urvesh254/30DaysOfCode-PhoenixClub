import java.io.*;
import java.util.*;
// import java.math.*;
import static java.lang.Math.pow;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
         int count = 0;
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        for (int i = 0; i < 31; i++) {
            if((int)(pow(2,i)) == a){
                System.out.println("true");
                count++;
                break;
            }
        }if(count == 0){
            System.out.println("false");
        }
    }
}
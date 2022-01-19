import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        int sum = 0,sum1 = 0,a;
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        do{
          a = n % 10;
          sum += a;
          n = n/10;
        }while(n>0);

  	int  temp = sum;
        while(temp!= 0 ){
            a = temp % 10;
            sum1 = sum1 + a;
            temp = temp/10;
 	 }
        System.out.println(sum1);
    }
}

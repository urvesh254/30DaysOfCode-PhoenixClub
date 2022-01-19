import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        String n;
        Scanner sc = new Scanner(System.in);
         n = sc.nextLine();
        int a = n.length();
        if(a%2 == 0){
            System.out.println("Even");
        }
        else{
            System.out.println("Odd");
        }
    }
}
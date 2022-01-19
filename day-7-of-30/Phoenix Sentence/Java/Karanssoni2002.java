import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */ 
        Scanner sc = new Scanner(System.in);
        int count = 26;
        String s = sc.nextLine();
        int len = s.length();
        for(char a = 'a';a<='z';a++){
            for(int i = 0; i<len;i++){   
                if(s.charAt(i) == a){
                    count--;
                    break;
           	 }
            }
        }
        if(count == 0){
            System.out.println("true");
        }
        else{
            System.out.println("false");
        }
    }
}
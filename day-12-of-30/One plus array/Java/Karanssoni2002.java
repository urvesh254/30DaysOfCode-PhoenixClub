import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        ArrayList<Integer> list=new ArrayList<>();
        ArrayList<Integer> list1=new ArrayList<>();
        
        for (int i = 0; i < n; i++) {
            int j=sc.nextInt();
            list.add(j);
        }
        int number=list.get(n-1);
        if(number%10==9) {
                number++;
            while(number!=0) {
                int n1=number%10;
                list1.add(n1);
                number/=10;
            }
            list.remove(n-1);

            Collections.reverse(list1);  
            list.addAll(list1);    
        }
         
        else {
            int k=list.get(n-1);
            k++;
            list.remove(n-1);
            list.add(k);
        }
        for (int i = 0; i <list.size(); i++) {
            System.out.print(list.get(i) + " ");
        }
    }
}
        

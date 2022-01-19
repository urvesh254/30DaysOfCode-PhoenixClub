import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
       Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int[n];
        int sum=0;
        String s="";
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
            s+=arr[i];
        }
    sum=Integer.parseInt(s);
        int k=sc.nextInt();
        sum+=k;
        ArrayList<Integer>list=new ArrayList<>();
        while(sum>0) {
            list.add(sum%10);
            sum/=10;
            
        }
        Collections.reverse(list);
        for(int i=0;i<list.size();i++) {
            System.out.print(list.get(i)+" ");
        }
    }
}

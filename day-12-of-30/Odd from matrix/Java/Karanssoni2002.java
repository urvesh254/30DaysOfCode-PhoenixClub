import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc=new Scanner(System.in);
    
        int m=sc.nextInt();
        int n=sc.nextInt();
        int lengthindies=sc.nextInt();
        int indies[][]=new int[lengthindies][lengthindies];
        for(int i=0;i<lengthindies;i++) {
            for(int j=0;j<lengthindies;j++) {
                indies[i][j]=sc.nextInt();
            }
        }
        int arr[][]=new int[m][n];
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                arr[i][j]=0;
            }
        }
        int k=0;
        int l=0;
        for(int i=0;i<lengthindies;i++) {
            for(int j=0;j<n;j++) {
                arr[indies[i][0]][j]++;
                                
            }
            
        }
        for(int i=0;i<m;i++) {
            for(int j=0;j<lengthindies;j++) {
                arr[i][indies[j][1]]++;
                                
            }
            
        }
        int count=0;
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                if(arr[i][j]%2!=0) {
                    count++;
                }
//                System.out.print(arr[i][j]+" ");
            }
//            System.out.println();
        }

        System.out.println(count);        
    }
    
    }
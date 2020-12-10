package JavaLoopsII;
import java.util.*;
import java.io.*;

class Solution{
    public static void main(String []argh){
        Scanner in = new Scanner(System.in);
        int q=in.nextInt();
        for(int i=0;i<q;i++){
            int a = in.nextInt();
            int b = in.nextInt();
            int n = in.nextInt();
            int currentValue = a + b;
            for (int j = 1; j <= n; j++) {
                System.out.print(currentValue + " ");
                currentValue += Math.pow(2, j)*b;
            }
            System.out.println();
        }
        in.close();
    }
}
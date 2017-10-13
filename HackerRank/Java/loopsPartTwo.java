import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class loopsPartTwo {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner in = new Scanner(System.in);

        int testCase = in.nextInt();

        for (int i = 0; i < testCase; i++) {
            int a = in.nextInt();
            int b = in.nextInt();
            int n = in.nextInt();

            int sum = a;
            for (int j = 0; j < n; j++) {
                sum += (int)Math.pow(2, j) * b;
                System.out.print(sum + " ");
            }
            System.out.println();
        }
    }
}
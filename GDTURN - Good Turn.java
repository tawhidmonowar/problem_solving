import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main(String args[]) {

        Scanner scanner = new Scanner(System.in);
        int testCase = scanner.nextInt();

        while(testCase>0)
        {
            int a, b;
            a = scanner.nextInt();
            b = scanner.nextInt();

            if(a+b>6)
            {
                System.out.println("YES");
            }
            else
            {
                System.out.println("NO");
            }

            testCase--;

        }
        

    }
}

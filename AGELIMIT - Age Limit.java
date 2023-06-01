import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main(String args[]) {

        Scanner scanner = new Scanner(System.in);
        int testCase = scanner.nextInt();
        scanner.nextLine();

        while(testCase>0)
        {
            int a, x, y;
            x = scanner.nextInt();
            y = scanner.nextInt();
            a = scanner.nextInt();

            if(a>=x && a<y)
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

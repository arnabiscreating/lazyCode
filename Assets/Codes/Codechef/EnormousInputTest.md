## Enormous Input Test

### Language : Java
### Platform : Codechef
### Question : https://www.codechef.com/problems/INTEST

### Question Statement
The purpose of this problem is to verify whether the method you are using to read input data is sufficiently fast to handle problems branded with the enormous Input/Output warning. You are expected to be able to process at least 2.5MB of input data per second at runtime.

Input
The input begins with two positive integers n k (n, k<=107). The next n lines of input contain one positive integer ti, not greater than 109, each.

Output
Write a single integer to output, denoting how many integers ti are divisible by K.

</hr>

### Solution:

```


import java.util.Scanner;
import java.io.IOException;



// Remember that the class name should be "Main" and should be "public".
public class Main {
	public static void main(String[] args) {
		// System.in and System.out are input and output streams, respectively.
	    Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        int n = sc.nextInt();
        int ans = 0;
        for (int i = 0; i < t; i++) {
            int x = sc.nextInt();
            if (x % n == 0) {
                ans++;
            }
            
        }
        System.out.println(ans);
	}
}

```

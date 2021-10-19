#### Name: Reverse Star Pattern
#### Language: JAVA
#### Platform: Codechef
#### Question: https://www.codechef.com/CCSTART2/problems/REVSTRPT

#### Question Statement
You're given a number N. Print the first N lines of the below-given pattern.

    *
   **
  ***
 ****
*****
Input:
First-line will contain the number N.
Output:
Print the first N lines of the given pattern.

Constraints
1≤N≤200

</hr>

#### Solution:
```
import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		try{
            Scanner sc = new Scanner(System.in);
            int n = sc.nextInt();
            for (int i= 0; i<n; i++)  
            {  
            for (int j=1; j<=n-i; j++)  
            {  
            System.out.print(" ");  
            }  
            for (int k=0;k<=i;k++)  
            {  
            System.out.print("*");  
            }   
            System.out.println("");  
            }  
            }  
		catch(Exception e){
		    return;
		}
	}
}

```
#### Name: Triangle Everywhere
#### Language: JAVA
#### Platform: Codechef
#### Question: https://www.codechef.com/CCSTART2/problems/EXTRICHK

#### Question Statement
You're given the length of three sides a, b, and c respectively. Now If these three sides can form an Equilateral Triangle then print 1, if these three sides can form an Isosceles Triangle then print 2, if these three sides can form a Scalene Triangle then print 3, otherwise print −1.

Input:
First-line will contain three numbers a, b, and c separated by space.
Output:
Print the answer in a new line.
</hr>

#### Solution:
```
/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		try{
		    Scanner s=new Scanner(System.in);
		    int a=s.nextInt();
		    int b=s.nextInt();
		    int c=s.nextInt();
		    
		    if(a+b>c&&b+c>a&&a+c>b){
		        if(a==b&&b==c){
		            System.out.println(1);
		        }
		        else if(a!=b&&b!=c&&c!=a){
		            System.out.println(3);
		        }
		        else{
		            System.out.println(2);
		        }
		    }
		    else{
		         System.out.println(-1);
		    }
		}
		catch(Exception e){
		    return;
		 
		}
	}
}

```
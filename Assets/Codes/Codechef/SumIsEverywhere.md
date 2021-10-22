#### Name: Sum Is Everywhere
#### Language: JAVA
#### Platform: Codechef
#### Question: https://www.codechef.com/CCSTART2/problems/SUMEVOD

#### Question Statement
You are given a number N and find the sum of the first N odd and even numbers in a line separated by space. 
All even and odd numbers should be greater than 0.

Input:
First-line will contain the number N.
Output:
Print the sum of the first N odd and even numbers in a line separated by space.
Constraints
1≤N≤10^6
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
		    Scanner sc=new Scanner(System.in);
		    long N=sc.nextInt();
		    long even=0;
		    long odd=0;
		    for(long i=1;i<=2*N;i++){
		        if(i%2==0){
		            even+=i;
		        }
		        else{
		            odd+=i;
		        }
		    }
		    System.out.println(odd+" "+even);
		}
		catch(Exception e){
		    return;
		}
	}
}

```
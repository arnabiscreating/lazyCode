#### Name: Alternative Square Pattern 
#### Language: JAVA
#### Platform: Codechef
#### Question: https://www.codechef.com/CCSTART2/problems/SQALPAT

#### Question Statement
You're given a number N. Print the first N lines of the below-given pattern.

1 2 3 4 5
10 9 8 7 6
11 12 13 14 15
20 19 18 17 16
21 22 23 24 25
30 29 28 27 26
Input:
First-line will contain the number N.
Output:
Print the first N lines of the given pattern.
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
		    Scanner s=new Scanner(System.in);
		    int n=s.nextInt();
        	int sumi = 0, sumj = 10;
        	for(int i=1; i<=n; i++){
        	    if(i%2!=0){
        	        for(int j=sumi+1; j<=sumi+5; j++){
        	            System.out.print(j+" ");
        	        }
        	        System.out.print("\n");
        	        sumi = sumi + 10;
        	    }else{
        	        for(int j=sumj; j>=sumj-4; j--){
        	            System.out.print(j+" ");;
        	        }
        	        System.out.print("\n");
        	        sumj = sumj + 10;
        	    }
        	}
		}
		catch(Exception e){
		    return;
		}
	}
}

```
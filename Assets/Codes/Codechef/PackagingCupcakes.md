#### Name: Packaging Cupcakes
#### Language: JAVA
#### Platform: Codechef
#### Question: https://www.codechef.com/problems/MUFFINS3

#### Question Statement
Now that Chef has finished baking and frosting his cupcakes, it's time to package them. Chef has N cupcakes, and needs to decide how many cupcakes to place in each package. Each package must contain the same number of cupcakes. Chef will choose an integer A between 1 and N, inclusive, and place exactly A cupcakes into each package. Chef makes as many packages as possible. Chef then gets to eat the remaining cupcakes. Chef enjoys eating cupcakes very much. Help Chef choose the package size A that will let him eat as many cupcakes as possible.

Input
Input begins with an integer T, the number of test cases. Each test case consists of a single integer N, the number of cupcakes.

Output
For each test case, output the package size that will maximize the number of leftover cupcakes. If multiple package sizes will result in the same number of leftover cupcakes, print the largest such size.
</hr>

#### Solution:
```
import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    try{
    	Scanner sc= new Scanner(System.in);
    	int t=sc.nextInt();
    	
    	while(t>0){
    	    int n=sc.nextInt();
        	int a = (n/2)+1;
        	System.out.println(a);
        	t--;
    	}
	    }
	    catch(Exception e){
	        return;
	    }
	}
}

```
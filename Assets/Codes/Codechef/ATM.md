#### Name: ATM
#### Language: JAVA
#### Platform: Codechef
#### Question: https://www.codechef.com/problems/HS08TEST

#### Question Statement
Pooja would like to withdraw X $US from an ATM. The cash machine will only accept the transaction if X is a multiple of 5, and Pooja's account balance has enough cash to perform the withdrawal transaction (including bank charges). For each successful withdrawal the bank charges 0.50 $US. Calculate Pooja's account balance after an attempted transaction.

Input
Positive integer 0 < X <= 2000 - the amount of cash which Pooja wishes to withdraw.

Nonnegative number 0<= Y <= 2000 with two digits of precision - Pooja's initial account balance.

Output
Output the account balance after the attempted transaction, given as a number with two digits of precision. If there is not enough money in the account to complete the transaction, output the current bank balance.
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
	    Scanner input = new Scanner(System.in);
	    double x = input.nextDouble();
	    double y = input.nextDouble(); 
	    
	    if(x%5==0 && y>=(x+0.50) && x>0){
	        System.out.printf("%.2f",y-(x+0.50));
	    }
	    else{
	        System.out.printf("%.2f",y);
	    }
	    }
	    catch(Exception e){
			return;
		}
	    
	}
}
```
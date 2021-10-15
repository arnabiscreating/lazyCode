#### Name: The Block Game
#### Language: JAVA
#### Platform: Codechef
#### Question: https://www.codechef.com/problems/PALL01

#### Question Statement
The citizens of Byteland regularly play a game. They have blocks each denoting some integer from 0 to 9. These are arranged together in a random manner without seeing to form different numbers keeping in mind that the first block is never a 0. Once they form a number they read in the reverse order to check if the number and its reverse is the same. If both are same then the player wins. We call such numbers palindrome.

Ash happens to see this game and wants to simulate the same in the computer. As the first step he wants to take an input from the user and check if the number is a palindrome and declare if the user wins or not. 

Input
The first line of the input contains T, the number of test cases. This is followed by T lines containing an integer N.

Output
For each input output "wins" if the number is a palindrome and "loses" if not, in a new line.

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
		    int T = sc.nextInt();
		    for(int i=0;i<T;i++){
		        int A = sc.nextInt();
		        int temp = A;
		        int rev=0;
		  
		      while(temp!=0){
		          rev = rev * 10 +  temp % 10;
		          temp = temp/10;
		      }
		      if (A==rev){
		          System.out.println("wins");
		      }
		          else{
		              System.out.println("loses");
		          }
		      
		    }
		}
		catch(Exception e){
		    return;
		}
	}
	
}


```
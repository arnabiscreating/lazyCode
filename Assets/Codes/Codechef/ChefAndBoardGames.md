#### Name: Chef And Board Games
#### Language: JAVA
#### Platform: Codechef
#### Question: https://www.codechef.com/problems/PCJ18B

#### Question Statement
Chef has recently been playing a lot of chess in preparation for the ICCT (International Chef Chess Tournament).

Since putting in long hours is not an easy task, Chef's mind wanders elsewhere. He starts counting the number of squares with odd side length on his chessboard..

However, Chef is not satisfied. He wants to know the number of squares of odd side length on a generic N∗N chessboard.

Input:
The first line will contain a single integer T, the number of test cases.
The next T lines will have a single integer N, the size of the chess board.
Output:
For each test case, print a integer denoting the number of squares with odd length.

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
		    Scanner sc = new Scanner(System.in);
		    int T = sc.nextInt();
		    for(int i=0;i<T;i++){
		        int N = sc.nextInt();
		        int Num=0;
		        for(int j=1 ; j<=N ; j+=2){
		            Num = Num + (N-j+1)*(N-j+1); 
		        }
		        System.out.println(Num);
		    }
		}
		catch(Exception e){
		    return;
		}
	}
}


```
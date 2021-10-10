## TITLE

### 💻 Language(s)

<table>
    <tr>
        <td> C++</td>
        <td>  Python</td>
        <td>  Java</td>
        <td>✔️  C</td>
        <td>  Other</td>
    </tr>
</table>

<!-- ### Question Plaform
(If platform is miscellaneous)
✔️AtCoder
Topcoder
SPOJ
-->

### 📖 Statement

Print a pattern of numbers from 1 to n as shown below. Each of the numbers is separated by a single space.

                            4 4 4 4 4 4 4  
                            4 3 3 3 3 3 4   
                            4 3 2 2 2 3 4   
                            4 3 2 1 2 3 4   
                            4 3 2 2 2 3 4   
                            4 3 3 3 3 3 4   
                            4 4 4 4 4 4 4   
Input Format

The input will contain a single integer n.

Constraints


Sample Input 0

    2

Sample Output 0

    2 2 2
    2 1 2
    2 2 2
    
Sample Input 1

    5
    
Sample Output 1

    5 5 5 5 5 5 5 5 5 
    5 4 4 4 4 4 4 4 5 
    5 4 3 3 3 3 3 4 5 
    5 4 3 2 2 2 3 4 5 
    5 4 3 2 1 2 3 4 5 
    5 4 3 2 2 2 3 4 5 
    5 4 3 3 3 3 3 4 5 
    5 4 4 4 4 4 4 4 5 
    5 5 5 5 5 5 5 5 5
    
    
Sample Input 2

    7
    
Sample Output 2

    7 7 7 7 7 7 7 7 7 7 7 7 7 
    7 6 6 6 6 6 6 6 6 6 6 6 7 
    7 6 5 5 5 5 5 5 5 5 5 6 7 
    7 6 5 4 4 4 4 4 4 4 5 6 7 
    7 6 5 4 3 3 3 3 3 4 5 6 7 
    7 6 5 4 3 2 2 2 3 4 5 6 7 
    7 6 5 4 3 2 1 2 3 4 5 6 7 
    7 6 5 4 3 2 2 2 3 4 5 6 7 
    7 6 5 4 3 3 3 3 3 4 5 6 7 
    7 6 5 4 4 4 4 4 4 4 5 6 7 
    7 6 5 5 5 5 5 5 5 5 5 6 7 
    7 6 6 6 6 6 6 6 6 6 6 6 7 
    7 7 7 7 7 7 7 7 7 7 7 7 7 

### ✍️ Solution

    #include <stdio.h>
    #include <string.h>
    #include <math.h>
    #include <stdlib.h>

    int main() 
    {

        int n;
        scanf("%d", &n);
        // Complete the code to print the pattern.
          int len = 2*n-1;
    int min1,min2,min;
      // Complete the code to print the pattern.
      // for rows
      for (int i=1; i <=len; i++) {
          // for col
          for (int j=1; j<=len; j++) {
            // min diff btn vertical sides
            min1 = i<=len-i ? i -1 : len-i;
            // min diff btn horizontal sides
            min2 = j<=len-j ? j -1: len-j;
            // min diff btn vertical & horizontal sides
            min = min1<=min2 ? min1 : min2;
            // print  
            printf("%d ",n-min);
          }
          printf("\n");
      }
        return 0;
    }

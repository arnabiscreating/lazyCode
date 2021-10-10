# Small Triangles, Large Triangles

## Language: `C`

### Question Statement [https://www.hackerrank.com/challenges/small-triangles-large-triangles/problem]

&nbsp;

### **Question Statement**

You are given n triangles, specifically, their sides a, b and c. Print them in the same style but sorted by their areas from the smallest one to the largest one. It is guaranteed that all the areas are different.

The best way to calculate a area of a triangle with sides a, b and c is Heron's formula.

Input Format

The first line of each test file contains a single integer n. n lines follow with three space-separated integers, a, b and c.

Output Format

Print exactly n lines. On each line print 3 space-separated integers, the a, b and c of the corresponding triangle.

Sample Input 0

3<br>
7 24 25<br>
5 12 13<br>
3 4 5<br>

Sample Output 0

3 4 5<br>
5 12 13<br>
7 24 25<br>

Explanation 0

The square of the first triangle is 84. The square of the second triangle is 30. The square of the third triangle is 6. So the sorted order is the reverse one.
### **Solution**

    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>

    struct triangle
    {
      int a;
      int b;
      int c;
    };

    typedef struct triangle triangle;

    void swap(triangle* a,triangle* b)
    {
        triangle temp=*a;
        *a=*b;
        *b=temp;
    }
    int cmp(triangle tr)
    {
        int a=tr.a;
        int b=tr.b;
        int c=tr.c;
        return (a+b+c)*(a-b+c)*(a+b-c)*(-a+b+c);
    }
    void sort_by_area(triangle* tr, int n) {
      /**
      * Sort an array a of the length n
      */
        for(int i=0;i<n;i++)
        {
            int swapped=0;
            for(int j=0;j<n-i-1;j++)
            {
                if(cmp(tr[j])>cmp(tr[j+1]))
                 swap(&tr[j],&tr[j+1]);
                swapped=1;
            }
            if(swapped==0)
                break;
        }

    }


    int main()
    {
      int n;
      scanf("%d", &n);
      triangle *tr = malloc(n * sizeof(triangle));
      for (int i = 0; i < n; i++) {
        scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
      }
      sort_by_area(tr, n);
      for (int i = 0; i < n; i++) {
        printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
      }
      return 0;
    }

```C Language


```

## First element to occur k times 

### 💻 Language(s)-C++

<table>
    <tr>
        <td>✔️ C++</td>
        <td>  Python</td>
        <td>  Java</td>
        <td>  C</td>
        <td>  Other</td>
    </tr>
</table>

### Question Plaform-GeeksForGeeks
   Problem Link - https://practice.geeksforgeeks.org/problems/first-element-to-occur-k-times5150/1#



### 📖 Statement

Given an array of N integers. Find the first element that occurs K number of times. 
 

Example 1:

Input :
N = 7, K = 2
A[] = {1, 7, 4, 3, 4, 8, 7}
Output :
4
Explanation:
Both 7 and 4 occur 2 times. 
But 4 is first that occurs 2 times.

### ✍️ Solution

       class Solution{
       public:
      int firstElementKTime(int a[], int n, int k)
       {
        unordered_map<int, int> m;
        for(int i = 0;i<n;i++){
            m[a[i]]++;
            if(m[a[i]] == k)
                return a[i];
             }
           return -1;
             }
         };

### 🤓 Explanation

  Use map to store the occurence of each element and return the answer once you find the  element occuring k times. 


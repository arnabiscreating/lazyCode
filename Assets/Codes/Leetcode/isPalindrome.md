
Name: isPalindrome
Language: Java
Platform: Leetcode
Question: 

Given an integer x, return true if x is palindrome integer.
An integer is a palindrome when it reads the same backward as forward. For example, 121 is palindrome while 123 is not.

Example 1:

Input: x = 121
Output: true

Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.


public class isPalindrome {
	public boolean palindrome(int x) {
        if(x<0)
            return false;
        
        int arraySize=0;
        int y = x;
        while(y>0){
            y=y/10;
            ++arraySize;            
        }
        int[] palArray = new int[arraySize];
        
        y = x;
        int currentIndex=arraySize-1;
        while(y>0){
            palArray[currentIndex] = y%10;
            y/=10;
            --currentIndex;
        }
        
        int startIndex = 0;
        int endIndex = arraySize-1;
        
        
        while(startIndex<endIndex){
            if(palArray[startIndex] != palArray[endIndex])
                return false;
            ++startIndex;
            --endIndex;
        }
        return true;
        
    }
}

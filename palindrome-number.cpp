// https://leetcode.com/problems/palindrome-number/

class Solution {
public:
    bool isPalindrome(int x) {
        int anotherNumber = 0;
        int input = x;
        if(input < 0) return false;
        
        while(x)
        {
            int digit = x%10;
            anotherNumber = anotherNumber*10 + digit;
            x = x/10;
        }
        
        return (anotherNumber == input);
    }
};

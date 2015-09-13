// https://leetcode.com/problems/add-digits/

class Solution {
public:
    int addDigits(int num) {
        if(num < 10) return num; 
        int x = num/9;
        int y = num%9;
        if(y == 0) return 9; 
        return num - x*9;
    }
};

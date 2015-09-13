// https://leetcode.com/problems/happy-number/

class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> numberSet;
        while(n != 1)
        {
            int temp = n;
            int sqSum = 0;
            while(temp)
            {
                sqSum += (temp % 10) * (temp % 10);
                temp = temp/10;
            }
            
            unordered_set<int>::const_iterator it = numberSet.find(sqSum);
            if(it != numberSet.end())
            {
                return false;
            }
            else
            {
                numberSet.insert(sqSum);
                n = sqSum;
            }
        }
        
        return true;
    }
};

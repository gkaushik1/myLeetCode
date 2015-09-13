//https://leetcode.com/problems/missing-number/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int result = 0;
        
        for(size_t i = 0; i < nums.size(); ++i)
        {
            result = result ^ nums[i] ^ i;
        }
        
        return (result ^ nums.size());
    }
};

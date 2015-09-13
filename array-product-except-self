// https://leetcode.com/problems/product-of-array-except-self/ 

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        size_t s = nums.size();
        int front = 1;
        int back = 1;
        vector<int> result(s,1);
        for(size_t i = 0; i < s; ++i)
        {
            result[i] *= front;
            front *= nums[i];
            result[(s-1)-i] *= back;
            back *= nums[(s-1)-i];
        }
        return result;
    }
};

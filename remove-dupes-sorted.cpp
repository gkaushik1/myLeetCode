// https://leetcode.com/problems/remove-duplicates-from-sorted-array/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        int j = 1;
        for(int i = 1; i < nums.size(); ++i)
        {
            if(nums[i-1] != nums[i])
            {
                nums[j++] = nums[i];
            }
        }
        
        return j;
    }
};

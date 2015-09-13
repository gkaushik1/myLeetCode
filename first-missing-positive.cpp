// https://leetcode.com/problems/first-missing-positive/

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        size_t s = nums.size();
        
        for(size_t i = 0; i < s; ++i)
        {
            if(nums[i] > s) continue; //ignore
            else if(nums[i] < 1) continue; //ignore 
            else if(nums[i] == i+1) continue; //ignore
            else if(nums[i] == nums[nums[i]-1]) continue; //ignore
            
            int tmp = nums[i];
            nums[i] = nums[nums[i]-1];
            nums[tmp-1] = tmp; 
            --i; //reconsider i
        }
        
        int result = s+1;
        for(size_t i = 0; i < s; ++i)
        {
            if(nums[i] != i+1) return (i+1);
        }
        
        return result;
    }
};

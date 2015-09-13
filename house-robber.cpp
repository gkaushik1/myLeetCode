// https://leetcode.com/problems/house-robber/

class Solution {
public:

    int max(int a, int b)
    {
      if(a > b) return a;
      else return b;
    }
    
    int rob(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        if(nums.size() == 1) return nums[0];
        vector<int> sums(nums.size()+1,0);
        sums[1] = nums[0];
        sums[2] = nums[1];
        int maxSum = max(sums[1], sums[2]);
        for(int i = 3; i < sums.size(); ++i)
        {
            sums[i] = max(sums[i-2], sums[i-3]) + nums[i-1];
            if(sums[i] > maxSum)
            {
                maxSum = sums[i];
            }
        }
        return maxSum;
    }
};

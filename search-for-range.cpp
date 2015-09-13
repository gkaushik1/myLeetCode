//https://leetcode.com/problems/search-for-a-range/

class Solution {
public:
    int returnFrontBackIndex(vector<int>& nums, int target, bool isFront) 
    {
        int i = 0;
        int j = nums.size();   // 2
        int n = nums.size();
        int mid = (i + j) / 2;  // 0 + 2 / 2 = 1
        int offset = 1;
        if(!isFront) offset = -1; 
        while(i < j)
        {
            if(((isFront && mid == 0) || (!isFront && mid == n-1)) && nums[mid] == target)
            {
                return mid;
            }
            
            if(nums[mid] == target && nums [mid - offset] != target)
            {
                return mid;
            }
            else if(nums[mid] < target)
            {
                if(i == mid) return -1;
                i = mid;
            }
            else if(nums[mid] > target)
            {
                if(j == mid) return -1;
                j = mid;
            }
            else
            {
                if(isFront) j = mid;
                else i = mid; 
            }
            
            mid = (i + j) / 2;
        }
        
        return -1;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        int front = returnFrontBackIndex(nums,target,true);
        int back = returnFrontBackIndex(nums,target,false);
        vector<int> result;
        result.push_back(front);
        result.push_back(back);
        return result;
    }
};

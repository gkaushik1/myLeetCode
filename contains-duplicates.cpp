// https://leetcode.com/problems/contains-duplicate-ii/

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> indexMap;
        for(size_t i = 0; i < nums.size(); ++i)
        {
            if(indexMap.find(nums[i]) != indexMap.end())
            {
                if(i - indexMap[nums[i]] <= k)
                {
                    return true;
                }
            }
            
            indexMap[nums[i]] = i;
        }
        
        return false;
    }
};

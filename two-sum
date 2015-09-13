class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> sumMap; 
        vector<int> result;
        
        for(int i = 0; i < nums.size() ; ++i)
        {
            map<int,int>::const_iterator it = sumMap.find(nums[i]);
            if(it != sumMap.end())
            {
                result.push_back(it->second+1);
                result.push_back(i+1);
                break;
            }
            int diff = target - nums[i];
            sumMap.insert(map<int,int>::value_type(diff,i));
        }
        std::sort(result.begin(), result.end());
        return result;
    }
};

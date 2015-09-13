// https://leetcode.com/problems/permutations/

class Solution {
public:
    void getPermutes(vector<int>& nums, vector<int>& remaining, vector<vector<int>>& output)
    {
        if(remaining.size() == 0) {output.push_back(nums); return;}
        
        for(int i = 0; i < remaining.size(); ++i)
        {
            nums.push_back(remaining[i]);
            vector<int> temp2; 
            for(int j = 0; j <remaining.size(); ++j)
            {
                if(j != i)
                temp2.push_back(remaining[j]);
            }
            getPermutes(nums,temp2,output);
            nums.pop_back();
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> output;
        vector<int> begin; 
        getPermutes(begin, nums, output);
        return output;
    }
};

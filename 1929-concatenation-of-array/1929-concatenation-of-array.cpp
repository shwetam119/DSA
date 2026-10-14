class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        for (int i=0;i<nums.size();i++){
            ans.push_back(nums[i]);
        }

        ans.insert(ans.end(),ans.begin(),ans.end());
        return ans;
    }
};
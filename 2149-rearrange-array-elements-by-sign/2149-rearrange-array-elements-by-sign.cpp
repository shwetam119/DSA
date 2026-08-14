class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> temp(nums.size());
        int posindex=0,negindex=1;
        for (int i=0;i<nums.size();i++){
            if(nums[i]>0){
                temp[posindex]=nums[i];
                posindex+=2;
            }
            else{
                temp[negindex]=nums[i];
                negindex+=2;
            }
        }
        return temp;
    }
};
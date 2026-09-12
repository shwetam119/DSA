class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int countneg=0,countpos=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                countneg++;
            }
            else if(nums[i]==0){
                continue;
            }
            else{
                countpos++;
            }
        }
        return max(countneg,countpos);
    }
};
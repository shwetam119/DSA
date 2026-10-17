class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int SUM=0,sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int num=nums[i];
            while(num>0){
                int digit=num%10;
                SUM+=digit;
                num=num/10;
            }
        }

        return sum-SUM;
    }
};
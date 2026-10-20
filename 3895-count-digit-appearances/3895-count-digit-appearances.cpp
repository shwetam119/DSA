class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int count=0;
        for (int i=0;i<nums.size();i++){
            int num=nums[i];
            while(num>0){
                int digits=num%10;
                if(digits==digit){
                    count++;
                }
                num=num/10;
            }
        }
        return count;
    }
};
class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int sumeven=0,sumodd=0;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                sumeven+=nums[i];
            }
            else{
                sumodd+=nums[i];
            }
        }
        return sumeven-sumodd;
    }
};
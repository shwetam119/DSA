class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> ans;
        int n=nums.size();
        int i=0;
        while(i<n){
            if(nums[i]<pivot){
                ans.push_back(nums[i]);
                i++;
            }
            else{
                i++;
            }
        }
        int j=0;
        while(j<n){
            if(nums[j]==pivot){
                ans.push_back(nums[j]);
                j++;
            }
            else{
                j++;
            }
        }
        int k=0;
        while(k<n){
            if(nums[k]>pivot){
                ans.push_back(nums[k]);
                k++;
            }
            else{
                k++;
            }
        }
        return ans;
    }
};
class Solution {
public:
    int first1(vector<int>& nums,int n,int x){
        int low=0,high=n-1;
        int first=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==x){
                first=mid;
                high=mid-1;
            }
            else if(nums[mid]<x) low=mid+1;
            else high=mid-1;
        }
        return first;
    }
    int second1(vector<int>& nums,int n,int x){
        int low=0,high=n-1;
        int second=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==x){
                second=mid;
                low=mid+1;

            }
            else if (nums[mid]<x) low=mid+1;
            else high=mid-1;
        }
        return second;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int fib=first1(nums,nums.size(),target);
        if(fib==-1) return {-1,-1};
        return {fib,second1(nums,nums.size(),target)};
    }
};
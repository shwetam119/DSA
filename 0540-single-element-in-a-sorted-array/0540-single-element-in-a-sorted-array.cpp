class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {

        int n = nums.size();

        // Only one element
        if(n == 1)
            return nums[0];

        // Check first element
        if(nums[0] != nums[1])
            return nums[0];

        // Check last element
        if(nums[n-1] != nums[n-2])
            return nums[n-1];

        int low = 1;
        int high = n - 2;

        while(low <= high) {

            int mid = low + (high - low) / 2;

            // mid itself is the single element
            if(nums[mid] != nums[mid-1] &&
               nums[mid] != nums[mid+1]) {

                return nums[mid];
            }

            // Correct pairing pattern
            if((mid % 2 == 0 && nums[mid] == nums[mid+1]) ||
               (mid % 2 == 1 && nums[mid] == nums[mid-1])) {

                // Single element is on the right
                low = mid + 1;
            }
            else {

                // Single element is on the left
                high = mid - 1;
            }
        }

        return -1;
    }
};
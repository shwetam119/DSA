class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();

        int low = 0, high = n - 1;

        while (low <= high) {

            // Find the middle element
            int mid = low + (high - low) / 2;

            // If target is found, return its index
            if (nums[mid] == target) return mid;

            // In a rotated sorted array, at least one half
            // (left or right) will always be sorted.

            // Check if the LEFT half is sorted
            if (nums[low] <= nums[mid]) {

                // Now check whether target lies inside
                // the sorted left half.
                if (nums[low] <= target && target <= nums[mid]) {

                    // Target is in the left half,
                    // so discard the right half.
                    high = mid - 1;
                }
                else {

                    // Target is NOT in the left half,
                    // so search in the right half.
                    low = mid + 1;
                }
            }

            // Otherwise, the RIGHT half must be sorted
            else {

                // Check whether target lies inside
                // the sorted right half.
                if (nums[mid] <= target && target <= nums[high]) {

                    // Target is in the right half,
                    // so discard the left half.
                    low = mid + 1;
                }
                else {

                    // Target is NOT in the right half,
                    // so search in the left half.
                    high = mid - 1;
                }
            }
        }

        // Target was not found in the array
        return -1;
    }
};
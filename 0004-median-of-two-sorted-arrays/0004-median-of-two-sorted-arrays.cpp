class Solution {
public:
    vector<int> merge(vector<int>& nums1, vector<int>& nums2){
        int m=nums1.size();
        int n=nums2.size();
        vector<int> ans(n+m);
        int i=0,j=0,k=0;
        while(i<m && j<n){
            if(nums1[i]<=nums2[j]){
                ans[k++]= nums1[i++];
            }
            else{
                ans[k++]=nums2[j++];
            }
        }
        while(i<m){
            ans[k++]= nums1[i++];
        }
        while(j<n){
            ans[k++]=nums2[j++];
        }
        return ans;
    }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> arr=merge(nums1,nums2);
        int low=0,high=arr.size()-1;
        int mid=(low+high)/2;
        
        if(arr.size()%2!=0){
            return (double)arr[mid];
        }
        else{
            return (double)(arr[mid]+arr[mid+1])/2;
        }
        return -1;
    }
};
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low=1,high=n;
        while(low<=high){
            int mid= low + (high - low) / 2;
            int result=isBadVersion(mid);
            if(result==true) high=mid-1;
            else if(result==false) low=mid+1;
        }
        return low;
    }
};
class Solution {
public:
    int findmax(vector<int>& piles){
        int maxi=INT_MIN;
        for(int i=0;i<piles.size();i++){
            maxi=max(maxi,piles[i]);
        }
        return maxi;
    }
    
    long long calculate(vector<int>& piles, int h){
        long long totalhr = 0;
        for(int i = 0; i < piles.size(); i++){
            totalhr += ceil((double)piles[i] / (double)h);
        }
        return totalhr;
    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = findmax(piles);
        
        while(low <= high){
            int mid = low + (high - low) / 2; // Better practice to prevent overflow
            long long ans = calculate(piles, mid);
            
            if(ans > h){
                low = mid + 1; // Needs to eat faster
            }
            else{
                high = mid - 1; // Try to eat slower
            }
        }
        return low;
    }
};
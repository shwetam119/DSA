class Solution {
public:
    int countneg(vector<int>& arr,int n){
        int cnt=0;
        for (int i=0;i<n;i++){
            if(arr[i]<0) cnt++;
        }
        return cnt;
    }
    int countNegatives(vector<vector<int>>& grid) {
        int ans = 0;

        for (int i = 0; i < grid.size(); i++) {
            ans += countneg(grid[i], grid[i].size());
        }
        return ans;
    }
};
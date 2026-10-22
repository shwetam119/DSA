class Solution {
public:
    vector<int> generaterow(int numRows){
        vector<int> ansrow;
        int mul=1;
        ansrow.push_back(1);
        for(int i=1;i<=numRows;i++){
            mul=mul*(numRows-i+1);
            mul=mul/i;
            ansrow.push_back(mul);
        }
        return ansrow;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=0;i<numRows;i++){
            ans.push_back(generaterow(i));
        }
        return ans;
    }
};
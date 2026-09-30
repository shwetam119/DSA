class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int count_max = 0;
        int index = 0;

        for (int i = 0; i < mat.size(); i++) {
            int count_ones = 0;

            for (int j = 0; j < mat[i].size(); j++) {
                if (mat[i][j] == 1) {
                    count_ones++;
                }
            }

            if (count_ones > count_max) {
                count_max = count_ones;
                index = i;
            }
        }

        return {index, count_max};
    }
};
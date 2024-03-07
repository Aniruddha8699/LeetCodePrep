// 74. Search a 2D Matrix

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        if (m > 1) {
            for (int i = 0; i < m; i++){
                if (matrix[i][n-1] < target || matrix[i][0] > target)   continue;
                for (int j = 0; j < n; j++){
                    if (matrix[i][j] == target) return true;
                }
            }
        } else {
            for (int i = 0; i < n; i++) {
                if (matrix[0][i] == target) return true;
            }
        }
        return false;
    }
};

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size();
        int x = 0, y = n - 1;
        while (matrix[x][y] != target){
            if (matrix[x][y] < target){
                x += 1;
                if (x == m) break;
            } else {
                y -= 1;
                if (y < 0) break;
            }
        }
        bool ret; // it's important;
        if (x < m && y >= 0) ret = true;
        else ret = false;
        return ret;
    }
};

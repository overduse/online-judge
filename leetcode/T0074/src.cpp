class Solution{
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target){
        int m = matrix.size(), n = matrix[0].size();
        int l = 0, r = m * n - 1;
        while(l < r){
            int mid = (l + r) / 2;
            if (matrix[mid / m][mid % m] >= target) r = mid;
            else l = mid+1;
        }
        bool ret = (matrix[r / m][r % m] == target);
        return ret;
    }
};

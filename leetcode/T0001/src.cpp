class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> res(2);
        vector<int> indexes(n);
        for(int i = 0; i < n; i++) indexes[i] = i;
        sort(indexes.begin(), indexes.end(), [&](int a, int b) {
            return nums[a] < nums[b];
        });
        int left = 0, right = n - 1;
        while (left < right){
            int sum = nums[indexes[left]] + nums[indexes[right]];
            if(sum == target) {
                res = {indexes[left], indexes[right]};
                break;
            }
            else if(sum < target) left++;
            else right--;
        }
        return res;
    }
};

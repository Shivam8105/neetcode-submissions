class Solution {
   public:
    int solve(int i, int prev, vector<int>& nums) {
        if (i >= nums.size()) {
            return 0;
        }

        int notTake = solve(i + 1, prev, nums);

        int take = 0;

        if (prev == -1 || nums[i] == nums[prev] + 1) {
            take = 1 + solve(i + 1, i, nums);
        }

        else if (nums[i] == nums[prev]) {
            take = solve(i + 1, prev, nums);
        }

        return max(take, notTake);
    }

    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        return solve(0, -1, nums);
    }
};
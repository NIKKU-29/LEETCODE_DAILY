class Solution {
public:
    int minDifference(vector<int>& nums) {

        std::ios::sync_with_stdio(false);
        std::cin.tie(nullptr);
        sort(begin(nums), end(nums));
        int n = nums.size();

        if (n <= 4)
            return 0;

        else {

            int max_min_diff = nums[n - 1] - nums[0];
            for (int selection = 0; selection <= 3; selection++) {
                max_min_diff = min(max_min_diff, nums[n - (3 - selection) - 1] -
                                                     nums[selection]);
            }

            return max_min_diff;
        }
    }
};
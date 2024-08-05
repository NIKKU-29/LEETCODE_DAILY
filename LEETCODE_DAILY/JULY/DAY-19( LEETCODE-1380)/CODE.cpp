class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

        int n = matrix.size();
        int m = matrix[0].size();

        unordered_map<int, int> holder;
        vector<int> ans;

        for (int i = 0; i < n; i++) {
            int mini = INT_MAX;

            for (int j = 0; j < m; j++) {
                mini = min(mini, matrix[i][j]);
            }

            holder[mini]++;
        }

        for (int i = 0; i < m; i++) {
            int maxi = INT_MIN;

            for (int j = 0; j < n; j++) {
                maxi = max(maxi, matrix[j][i]);
            }

            holder[maxi]++;
        }

        for (auto elem : holder) {
            if (elem.second == 2) {
                ans.push_back(elem.first);
            }
        }

        return ans;
    }
};
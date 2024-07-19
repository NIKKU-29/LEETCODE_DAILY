class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ios::sync_with_stdio(false);
        std::cin.tie(nullptr);
        vector<int> result = {-1, -1};

        if (head == nullptr || head->next == nullptr)
            return result; 

        vector<int> critical_points;
        int counter = 2;
        ListNode* prev = head;
        ListNode* curr = head->next;

        // Find all critical points (local maxima and minima)
        while (curr != nullptr && curr->next != nullptr) {
            if ((curr->val > prev->val && curr->val > curr->next->val) ||
                (curr->val < prev->val && curr->val < curr->next->val)) {
                critical_points.push_back(counter);
            }
            prev = curr;
            curr = curr->next;
            counter++;
        }

        int n=critical_points.size();

        // If fewer than 2 critical points found, return default result
        if (n < 2)
            return result;

        // Calculate minDistance and maxDistance
        int minDistance = INT_MAX;
        int maxDistance = critical_points[n-1] - critical_points[0];

        for (int i = 1; i < n; ++i) {
            int dist = critical_points[i] - critical_points[i - 1];
            minDistance = min(minDistance, dist);
           }


        return {minDistance,maxDistance};
    }
};
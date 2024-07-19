class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        ListNode* dummy = new ListNode(0);
        ListNode* ans = dummy;
        int sum = 0;

        head = head->next;

        while (head != nullptr) {
            if (head->val == 0) {
                ans->next = new ListNode(sum);
                ans = ans->next;
                sum = 0;
            }

            else {
                sum += head->val;
            }

            head = head->next;
        }

        return dummy->next;
    }
};
class Solution {
public:
    int maximumGain(string s, int x, int y) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        stack<char> a;
        int point = 0;

        // If x < y, we prioritize "ba" else we prioritize "ab"
        if (x < y) {
            // Prioritize "ba"
            for (int i = 0; i < s.size(); ++i) {
                char elem = s[i];
                if (!a.empty() && a.top() == 'b' && elem == 'a') {
                    point += y;
                    a.pop();
                } else {
                    a.push(elem);
                }
            }

            // Handle remaining "ab"
            stack<char> b;
            while (!a.empty()) {
                char elem = a.top();
                a.pop();
                if (!b.empty() && b.top() == 'b' && elem == 'a') {
                    point += x;
                    b.pop();
                } else {
                    b.push(elem);
                }
            }
        } else {
            // Prioritize "ab"
            for (int i = 0; i < s.size(); ++i) {
                char elem = s[i];
                if (!a.empty() && a.top() == 'a' && elem == 'b') {
                    point += x;
                    a.pop();
                } else {
                    a.push(elem);
                }
            }

            // Handle remaining "ba"
            stack<char> b;
            while (!a.empty()) {
                char elem = a.top();
                a.pop();
                if (!b.empty() && b.top() == 'a' && elem == 'b') {
                    point += y;
                    b.pop();
                } else {
                    b.push(elem);
                }
            }
        }

        return point;
    }
};
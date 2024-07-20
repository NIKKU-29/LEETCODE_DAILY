
class Solution {
public:
    int findTheWinner(int n, int k) {
        
        vector<int> friends;
        
        // Initialize the list of friends numbered from 1 to n

        for (int i = 1; i <= n; ++i) {
            friends.push_back(i);
        }

        int index = 0;

        // Start from the first friend

        // Continue until only one friend is left

        while (friends.size() > 1) {

            // Find the next friend to be removed

            index = (index + k - 1) % friends.size();

            friends.erase(friends.begin() + index); 

            // Remove the friend from the circle
        }

        // The last remaining friend is the winner
        
        return friends[0];
    }
};

LINK TO THE QUESTION: [https://leetcode.com/problems/merge-nodes-in-between-zeros/description/?envType=daily-question&envId=2024-07-04]

Intuition
The goal is to traverse the linked list and sum up the values between nodes with value 0. When we encounter a node with value 0, we create a new node with the accumulated sum and link it to the result list. This way, we merge the segments of the list that are between zeros into single nodes.

Approach
Initialize a dummy node: Use a dummy node to simplify edge cases in the result list. 🟡
Traverse the linked list: Start from the head of the list, skipping the initial 0 node. 🚶
Accumulate values: Sum the values of nodes between the zeros. ➕
Create new nodes: When encountering a node with value 0, and if the sum is non-zero, create a new node with the accumulated sum and link it to the result list. 🔗
Reset the sum: After creating a new node, reset the sum to zero. 🔄
Return the result list: After traversing the entire list, return the next node of the dummy node as the head of the result list. 🏁
Complexity
Time Complexity
O(n): The time complexity is (O(n)), where (n) is the number of nodes in the linked list. We traverse the linked list exactly once. ⏱️
Space Complexity
O(1): The space complexity is (O(1)) (excluding the space required for the input and output lists). We only use a few pointers and an integer variable for the sum, so the additional space used is constant. 📏
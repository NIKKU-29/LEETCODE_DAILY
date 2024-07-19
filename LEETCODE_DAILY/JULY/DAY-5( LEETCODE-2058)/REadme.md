LINK TO THE QUESTION; [https://leetcode.com/problems/merge-nodes-in-between-zeros/description/?envType=daily-question&envId=2024-07-04]

Intuition

In this problem, we need to find the critical points in a singly-linked list. Critical points woh nodes hain jo ya to local maxima hain ya local minima. Local maxima hai vo jab current node ki value uske adjacent nodes se badi hoti hai, aur local minima tab hoti hai jab current node ki value uske adjacent nodes se choti hoti hai. Hume minimum distance aur maximum distance between any two critical points find karni hai.

Approach

Initialize Result: Start with a result vector {-1, -1} to handle cases where there are fewer than two critical points.

Agar list empty hai ya sirf ek element hai, to return {-1, -1}.
Identify Critical Points: Traverse the list aur check karen ki current node local maxima ya minima hai ya nahi.

Critical points ko track karne ke liye ek critical_points is made
Use a counter to keep track of the position of each node.
Calculate Distances:

Agar critical_points vector mein less than 2 elements hain, to return {-1, -1}.
Otherwise, calculate the minimum distance between consecutive critical points aur maximum distance between the first and last critical points.

Time Complexity

Traversal: O(n)
We traverse the linked list once to find the critical points.
Distance Calculation: O(m)
We calculate distances between the critical points. Since m (the number of critical points) is at most n, the overall time complexity is O(n).

Space Complexity

Critical Points Storage: O(n)
We store the positions of critical points in a vector. In the worst case, this requires O(n) space.
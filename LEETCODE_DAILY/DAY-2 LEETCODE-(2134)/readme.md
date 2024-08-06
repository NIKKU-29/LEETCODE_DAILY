LINK TO THE QUESTION->https://leetcode.com/problems/minimum-swaps-to-group-all-1s-together-ii/solutions/?envType=daily-question&envId=2024-08-02

Intuition and Approach
The problem is to determine the minimum number of swaps needed to group all 1s together in a binary array. To solve this, we can leverage the sliding window technique over a circular array.

Here's the step-by-step approach:

Count the Number of 1s:

First, count the total number of 1s in the array. Let's denote this count as count1.
Initialize Sliding Window:

Use a sliding window of size count1 to find the maximum number of 1s in any window of that size. This will help us determine the least number of 0s in such a window, which indicates the minimum swaps needed.
Sliding Window Over Circular Array:

The array is treated as circular to account for scenarios where grouping 1s might wrap around the end of the array to the beginning.
Use indices i and j to maintain the sliding window, with j iterating over 2 * n (twice the size of the array) to simulate circular behavior.
For each element, check if it is a 1 and update the count of 1s in the current window (curr1).
If the window size exceeds count1, move the left boundary of the window (i) and adjust curr1 accordingly.
Keep track of the maximum number of 1s found in any window of size count1.
Calculate Minimum Swaps:

The minimum number of swaps needed is the total number of 1s minus the maximum number of 1s found in any window of size count1.
Time and Space Complexity
Time Complexity:

The solution iterates over the array twice: once for counting the 1s and another for the sliding window operation over 2 * n.
Hence, the overall time complexity is O(n).
Space Complexity:

The solution uses a constant amount of extra space for variables (count1, i, j, curr1, max1), independent of the input size.
Hence, the space complexity is O(1).
Question LINK : [https://leetcode.com/problems/find-the-winner-of-the-circular-game/?envType=daily-question&envId=2024-07-08]

### Intuitive Approach

1. **Concept**:
   - Imagine a group of friends standing in a circle. You start counting from a particular friend, and every  k -th friend is eliminated until only one friend remains. Your goal is to find out which friend is the last remaining.

2. **Process**:
   - **Initialization**: Start with a list of friends numbered from 1 to  n .
   - **Elimination**: Using a loop, repeatedly remove the  k -th friend from the list. After removing a friend, adjust the position to start counting from the next friend. This continues until only one friend remains.

3. **Details**:
   - **Index Calculation**: Use modulo arithmetic to handle the circular nature of the problem. If you need to remove the  k -th friend from a list of size  m , you can find their position using `(currentIndex + k - 1) % m`.
   - **Update List**: Remove the friend from the list and adjust the current position.

### Time Complexity

- **Removing Elements**: Each removal operation involves shifting elements in the list, which is an  O(n)  operation. 
- **Number of Operations**: You need to perform this operation  n - 1  times (since the last person remaining doesn’t require removal).
- **Total Complexity**: Since each removal operation is  O(n)  and there are  n - 1  operations, the total time complexity is  O(n^2) .

### Space Complexity

- **List Storage**: You need to store all  n  friends in the list.
- **Extra Variables**: The space used for additional variables (like index) is constant.
- **Total Complexity**: The space complexity is  O(n) , due to storing the list of friends.


LINK TO THE QUESTION:-[https://leetcode.com/problems/minimum-difference-between-largest-and-smallest-value-in-three-moves/?envType=daily-question&envId=2024-07-03]

### Approach and Intuition:

The given problem involves finding the minimum difference between the maximum and minimum values in an array after making up to three changes. The optimal way to achieve this is to consider the effect of removing up to three of the largest or smallest values, as these have the greatest influence on the range of values.

Here's a step-by-step breakdown of the approach:

1. **Edge Case Handling:**
   - If the size of the array (`n`) is less than or equal to 4, the minimum difference is 0 because we can remove all elements.

2. **Sorting the Array:**
   - First, sort the array. Sorting helps in easily identifying the largest and smallest elements and their removal.
   
3. **Calculate Differences:**
   - After sorting, the largest and smallest elements in the array will be at the ends. 
   - To minimize the difference between the maximum and minimum, consider the following scenarios after making up to three changes:
     - Remove the three largest elements.
     - Remove the two largest and one smallest element.
     - Remove the one largest and two smallest elements.
     - Remove the three smallest elements.
   - Compute the difference for each of these scenarios and take the minimum.

### Time and Space Complexity:

**Time Complexity:**
- **Sorting:** Sorting the array takes O(n log n) time.
- **Constant Time Operations:** The rest of the operations inside the loop (finding minimum differences) take O(1) time.
- **Total Time Complexity:** O(n log n) due to the sorting step.

**Space Complexity:**
- **Auxiliary Space:** The space complexity is O(1) because we are using a constant amount of extra space.
- **In-Place Sorting:** Sorting can be done in-place, so no additional space is needed for the sort.


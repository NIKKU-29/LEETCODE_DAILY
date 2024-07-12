
### Intuitive Approach

1.   Traversal with Condition Check  :
   - Iterate through the array from the beginning to the second-to-last element ( i  from  0  to  n-3 ).
   - For each element  arr[i] , check if it,  arr[i+1] , and  arr[i+2]  are all odd numbers.
   - If found, return  true .
   - If the loop completes without finding such a triplet, return  false .

2.   Edge Cases  :
   - Handle cases where the array has fewer than three elements by returning  false .

### Time Complexity

-   Traversal  : The main loop runs from  0  to  n-3 , where  n  is the size of the array. Hence, the time complexity is  O(n) , where  n  is the number of elements in the array.
-   Condition Check  : Each iteration involves a constant-time check of three elements ( arr[i] ,  arr[i+1] ,  arr[i+2] ), which is  O(1) .

Therefore, the overall time complexity is  O(n) , where  n  is the size of the input array.

### Space Complexity

- The space complexity is  O(1)  because we are using only a few extra variables ( sol ,  n ,  i ), regardless of the size of the input array. This constant space usage does not increase with the input size.

### Conclusion

- The approach efficiently checks for three consecutive odd numbers in a single pass through the array ( O(n)  time complexity).
- It uses constant extra space ( O(1)  space complexity), making it efficient in terms of memory usage as well.

This analysis ensures that the solution is optimal both in terms of time and space complexity for the given problem of detecting three consecutive odd numbers in an array.
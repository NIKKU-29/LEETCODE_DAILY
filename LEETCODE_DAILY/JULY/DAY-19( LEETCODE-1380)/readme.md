Link to the question: [https://leetcode.com/problems/lucky-numbers-in-a-matrix/description/?envType=daily-question&envId=2024-07-19]

ONE IMPORTANT THING THE QUESTION GIVES IS THAT ALL THE NUMBERS IN THE MATRIX ARE DISTINCT/UNIQUE.

### Code Explanation

The given code defines a function `luckyNumbers` that finds the "lucky numbers" in a matrix. A lucky number is defined as an element that is the minimum in its row and the maximum in its column.

### Approach

1. **Initialization**:
   
   - `n` and `m` store the number of rows and columns in the matrix, respectively.
   - `unordered_map<int, int> holder` keeps track of the occurrence of the minimum row values and maximum column values.
   - `vector<int> ans` will store the final lucky numbers.

2. **Find Minimum in Each Row**:
   - Iterate over each row.
   - For each row, find the minimum element and store it in the `holder` map.

3. **Find Maximum in Each Column**:
   - Iterate over each column.
   - For each column, find the maximum element and store it in the `holder` map.

4. **Identify Lucky Numbers**:
   - Traverse the `holder` map.
   - If an element appears twice (once as a minimum and once as a maximum), it is a lucky number and added to the `ans` vector.

### Time and Space Complexity

- **Time Complexity**:  (O(n * m) )
  - Finding the minimum in each row:  (O(n * m) )
  - Finding the maximum in each column:  (O(n * m) )
  - Total time complexity is  (O(n * m) ).

- **Space Complexity**:  (O(n + m) )
  - The `holder` map can have at most  (n + m ) elements.

### Example and Diagram

Let's consider a 3x3 matrix as an example:

|     |     |     |
|-----|-----|-----|
| 3   | 7   | 8   |
| 9   | 11  | 13  |
| 15  | 16  | 17  |

#### Step-by-Step Process

1. **Find Minimum in Each Row**:
   - Row 1: Minimum is 3
   - Row 2: Minimum is 9
   - Row 3: Minimum is 15

   **Holder after step 1**
   
    MAP

    3-> 1
    9-> 1
    15-> 1

2. **Find Maximum in Each Column**:
   - Column 1: Maximum is 15
   - Column 2: Maximum is 16
   - Column 3: Maximum is 17

   **Holder after step 2**: 

    MAP

    3-> 1
    9-> 1
    15-> 2
    16-> 1
    17-> 1

3. **Identify Lucky Numbers**:
   - Only 15 appears twice in the `holder`.

   **Lucky Numbers**: [15]


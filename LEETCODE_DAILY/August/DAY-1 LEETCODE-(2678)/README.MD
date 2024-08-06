Question link-https://leetcode.com/problems/number-of-senior-citizens/?envType=daily-question&envId=2024-08-01

Intuition and Approach
The task is to count how many people are senior citizens based on the provided details. The details are given as a vector of strings, where each string contains information about a person, and the age is embedded within this string. Specifically, the age is located at the 12th and 13th positions (index 11 and 12) of each string.

Here's the step-by-step approach:

Initialization: Initialize a counter to zero, which will keep track of the number of senior citizens.
Iterate through each detail string: Loop through each string in the details vector.
Extract the age: For each string, extract the characters at the 12th and 13th positions, convert them to an integer, and calculate the age.
Check the age: If the age is greater than 60, increment the counter.
Return the counter: After processing all strings, return the counter value.
Time and Space Complexity
Time Complexity:

The primary operation is a loop that iterates over each string in the details vector.
Inside the loop, accessing characters and performing arithmetic operations are constant time operations, O(1).
Therefore, if there are n strings in the vector, the overall time complexity is O(n).
Space Complexity:

The space used by the function is constant, as it only uses a few integer variables (count and curr), which do not depend on the input size.
No additional data structures are used that grow with the input size.
Hence, the space complexity is O(1).
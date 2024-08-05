Intuition and Approach 🌟
Problem Understanding:

Given a string with letters and nested parentheses, we need to reverse the substrings inside each pair of parentheses from the innermost to the outermost.
Approach:

Stack Usage 📚:

The stack helps manage nested structures by temporarily storing substrings when encountering an opening parenthesis (.
When encountering a closing parenthesis ), the current substring is reversed and concatenated with the top substring from the stack.
String Manipulation:

Use a dummy string to build substrings as characters are iterated.
Upon encountering an opening parenthesis (, push the current dummy string onto the stack and clear dummy.
Upon encountering a closing parenthesis ), reverse the dummy string, pop the top of the stack, and concatenate it with the reversed dummy.
Example with Stack Visualization 📚🔍
Consider the string "a(bc)de":

Initial State:

Stack: []
Dummy: ""
Processing a:

Dummy: "a"
Processing (:

Push: dummy to stack.
Stack: ["a"]
Dummy: ""
Processing b and c:

Dummy: "bc"
Processing ):

Reverse: dummy to "cb"
Pop: Pop afrom ["a"] and add to Dummy->( "a"+"cb").
Stack: []
Dummy: "acb"
Processing d and e:

These d and e get added to the Dummy.
Dummy: "acbde"
Time and Space Complexity ⏳📦
Time Complexity: O(n)

Traversal: The string is traversed once, resulting in O(n) time complexity, where n is the length of the string.
Reversing Substrings: Each substring is reversed once, so the total time remains O(n).
Space Complexity: O(n)

Stack Storage: In the worst case, the stack stores all characters up to the depth of the nested parentheses, resulting in O(n) space complexity.
Dummy String: Additional space for the dummy string is proportional to the input size, contributing to O(n) space complexity overall.
Intuition:
Position and Direction:

position starts at 1 and moves either forwards or backwards (direction).
direction toggles when position reaches either end (1 or n).
Simulation:

The loop continues until all passes t are completed.
Each pass adjusts the position according to the direction.
If position reaches either end (1 or n), direction reverses to simulate bouncing back.
Time Complexity:
Loop Iterations:

The while loop runs t times, as it simulates t passes of the pillow.
Each iteration involves simple arithmetic operations and conditional checks (O(1) operations).
Overall:

The time complexity is O(t), where t is the number of passes specified.
Space Complexity:
Variables:
The function uses a constant amount of extra space (O(1) space complexity).
Only a few variables (direction, position, n, t) are maintained throughout, each being a primitive integer.
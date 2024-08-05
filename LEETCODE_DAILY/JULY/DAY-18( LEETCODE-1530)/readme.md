Intuition and Approach 🚀
To solve the problem of counting good leaf node pairs in a binary tree, we need to traverse the tree and gather distances from each node to its leaf nodes. Using these distances, we can count pairs of leaf nodes that meet the distance criteria. The approach involves recursive traversal, where each node collects distances from its left and right subtrees, checks for valid pairs, and then propagates updated distances back up the tree.

Base Case: If the node is nullptr, return an empty vector as there are no leaf nodes.
Leaf Node: If the node is a leaf, return a vector containing the distance 1 (distance from the leaf to itself).
Recursive Calls: Recursively call the solver function on the left and right children to get the distances from their respective leaf nodes.
Count Valid Pairs: For each combination of distances from the left and right subtrees, check if their sum is less than or equal to the given distance. If yes, increment the count.
Update Distances: Increment the distances from the left and right subtrees by 1 (to account for the current node) and add them to a new distance vector if they are less than the given distance.
Return Distances: Return the updated distance vector.
Time and Space Complexity ⏱️💾
Time Complexity: O(N^2) in the worst case, where N is the number of nodes in the tree. This is because, for each node, we might need to compare all pairs of distances from its left and right subtrees. However, in practice, the number of comparisons is often much smaller than N^2 due to the constraint on the distance.

Space Complexity: O(N) for the recursion stack in the worst case (for a skewed tree) and O(N) for storing distances in the vectors, where N is the number of nodes in the tree.

![alt text](<WhatsApp Image 2024-07-18 at 13.23.42_6a33c4d0.jpg>)
![alt text](<WhatsApp Image 2024-07-18 at 13.23.41_afcd5e8d.jpg>)
![alt text](<WhatsApp Image 2024-07-18 at 13.23.41_0938c291.jpg>)
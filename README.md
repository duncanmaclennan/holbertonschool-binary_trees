# Learning Objectives 

### What is a binary tree?

A binary tree is like a family tree. It's a way to organise data in a tree-like structure where each "node" can have up to two "children."

### What is the difference between a binary tree and a Binary Search Tree (BST)?
A **binary tree **is a general structure with nodes having between zero to two children. A **Binary Search Tree **(BST) is a specific type of binary tree where nodes are organised so that values to the left are smaller than the parent node, and values to the right are larger. BSTs are often used for efficient searching.

### What is the possible gain in terms of time complexity compared to linked lists?
Binary trees can perform operations like searching and inserting data much faster than linked lists. Searching in a balanced binary tree has a time complexity of O(log N), which is faster than the O(N) time complexity of linked lists for large datasets.

### What are the depth, the height, and the size of a binary tree?
The **depth** of a tree is how many levels or layers it has. The **height** is the length of the longest path from the root to a leaf. The **size** of a binary tree is the total number of nodes in it.

### What are the different traversal methods to go through a binary tree?

  - **In-order**: Visit the left subtree, then the current node, and finally the right subtree.
  - **Pre-order**: Visit the current node, then the left subtree, and finally the right subtree.
  - **Post-order**: Visit the left subtree, then the right subtree, and finally the current node.

### What is a complete, a full, a perfect, and a balanced binary tree?

  - **Complete Binary Tree**: Every level of the tree is completely filled except possibly for the last level, which is filled from left to right.
  - **Full Binary Tree**: Every node has either zero or two children; no node has only one child.
  - **Perfect Binary Tree**: A full binary tree where all leaf nodes are at the same level, and each non-leaf node has exactly two children.
  - **Balanced Binary Tree**: A binary tree in which the height of the left and right subtrees of any node differs by at most one. It helps keep operations efficient.

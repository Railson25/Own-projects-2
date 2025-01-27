# Inorder Traversal of a Binary Tree

This JavaScript function performs an inorder traversal of a binary tree. In an inorder traversal, the nodes are visited in the following order:

1. Visit the left subtree.
2. Visit the current node.
3. Visit the right subtree.

The function takes the root of the binary tree as input and returns an array of the node values in the correct order.

---

## How the Code Works

### Explanation

1. Base Case:
   - If the current node is `null`, the function does nothing and returns.
2. Recursive Traversal:

   - First, it recursively calls itself on the left subtree.
   - Then, it processes the current node by adding its value to the result array.
   - Finally, it recursively calls itself on the right subtree.

3. At the end, the function returns an array containing the node values in inorder order.

---

## Examples

### Example 1

Input Tree:

```plaintext
    1
     \
      2
     /
    3
```

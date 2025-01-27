/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @return {number[]}
 */
var inorderTraversal = function (root) {
  const result = [];

  const transverse = (node) => {
    if (node === null) return;
    transverse(node.left);
    result.push(node.val);
    transverse(node.right);
  };
  transverse(root);
  return result;
};

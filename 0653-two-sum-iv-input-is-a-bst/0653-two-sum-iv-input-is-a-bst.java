/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public boolean findTarget(TreeNode root, int k) {
     Stack<TreeNode> inOrderStack = new Stack<>();
        Stack<TreeNode> revInOrderStack = new Stack<>();
        
        TreeNode leftNode = root;
        TreeNode rightNode = root;

        while (true) {
            // Traverse the left subtree for the smallest values
            while (leftNode != null) {
                inOrderStack.push(leftNode);
                leftNode = leftNode.left;
            }

            // Traverse the right subtree for the largest values
            while (rightNode != null) {
                revInOrderStack.push(rightNode);
                rightNode = rightNode.right;
            }

            if (inOrderStack.isEmpty() || revInOrderStack.isEmpty()) {
                return false; // No valid pairs
            }

            TreeNode minNode = inOrderStack.peek();  // Node with the minimum value
            TreeNode maxNode = revInOrderStack.peek(); // Node with the maximum value

            if (minNode == maxNode) {
                return false; // Same node can't be part of a valid pair
            }

            int sum = minNode.val + maxNode.val;
            if (sum == k) {
                return true; // Found the pair
            } else if (sum < k) {
                // Move to the next larger node in the in-order traversal
                inOrderStack.pop();
                leftNode = minNode.right;
            } else {
                // Move to the next smaller node in the reverse in-order traversal
                revInOrderStack.pop();
                rightNode = maxNode.left;
            }
        }
    }
}
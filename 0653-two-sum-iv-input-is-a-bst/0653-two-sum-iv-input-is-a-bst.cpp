class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        
        stack<TreeNode*> inord, revInord;
        TreeNode* root1 = root;
        TreeNode* root2 = root;
        
        while(true){
            while(root1)    
                inord.push(root1), root1 = root1->left;
            
            while(root2)    
                revInord.push(root2), root2 = root2->right;
            
            // If any of the stacks is empty, break the loop as there's no further exploration possible
            if(inord.empty() || revInord.empty())   
                break;
            
            root1 = inord.top();    // Node with the minimum value
            root2 = revInord.top(); // Node with the maximum value.
            
            if(root1 == root2) {
                // If the same node is found in both stacks, break the loop as no further exploration is needed
                break;
            }
            
            if(root1->val + root2->val == k){
                // If sum equals k, return true
                return true;
            }
            
            if(root1->val + root2->val < k){
                // If sum is less than k, pop the node with minimum value and move to its right subtree
                inord.pop();
                root1 = root1->right;
                root2 = nullptr; // Reset root2 to nullptr for next iteration
            }
            else{
                // If sum is greater than k, pop the node with maximum value and move to its left subtree
                revInord.pop();
                root2 = root2->left;
                root1 = nullptr; // Reset root1 to nullptr for next iteration
            }
        }
        // If loop breaks, it means no such pair exists
        return false;
    }
};

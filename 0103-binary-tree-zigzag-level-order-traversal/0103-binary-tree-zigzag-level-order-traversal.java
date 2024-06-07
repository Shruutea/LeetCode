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
    public List<List<Integer>> zigzagLevelOrder(TreeNode root) {
        List<List<Integer>> result = new ArrayList<>();
        if (root == null){
            return result;
        }
        Stack <TreeNode> currLevel = new Stack<>();
        Stack <TreeNode> nextLevel = new Stack<>();
        boolean leftToRight = true;
        currLevel.push(root);
        
        while (!currLevel.isEmpty()){
            List<Integer> levelList = new ArrayList <>();
            while (!currLevel.isEmpty()){
            TreeNode node = currLevel.pop();
            levelList.add(node.val);

            if (leftToRight){
                if (node.left != null){
                    nextLevel.push(node.left);
                }
                if (node.right != null){
                    nextLevel.push(node.right);
                }
            } else {
                if (node.right != null){
                    nextLevel.push(node.right);
                } 
                if (node.left != null){
                    nextLevel.push(node.left);
                }
            }

            
        }
        Stack<TreeNode> temp = currLevel;
        currLevel = nextLevel;
        nextLevel = temp;
        leftToRight = !leftToRight;

        result.add(levelList);
        }

        return result;
        
    }
}
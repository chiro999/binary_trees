/**
 * is_bst_helper - Checks if a binary tree is a valid binary search tree.
 * @tree: A pointer to the root node of the tree to check.
 * @lo: The value of the smallest node visited thus far.
 * @hi: The value of the largest node visited this far.
 *
 * Return: If the tree is a valid BST, 1, otherwise, 0.
 */
int is_bst_helper(const binary_tree_t *tree, int lo, int hi)
{
    /* Check if the current node is not NULL */
    if (tree != NULL)
    {
        /* Check if the value of the current node is outside the valid range */
        if (tree->n < lo || tree->n > hi)
            return (0);
        
        /* Recursively check the left and right subtrees with updated range limits */
        return (is_bst_helper(tree->left, lo, tree->n - 1) &&
                is_bst_helper(tree->right, tree->n + 1, hi));
    }
    /* If the current node is NULL, it is considered part of a valid BST */
    return (1);
}

/**
 * binary_tree_is_bst - Checks if a binary tree is a valid binary search tree.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 1 if tree is a valid BST, and 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
    /* Check if the tree is NULL */
    if (tree == NULL)
        return (0);
    
    /* Call the helper function with the initial range limits */
    return (is_bst_helper(tree, INT_MIN, INT_MAX));
} /* binary_tree_is_bst */

#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 * @tree: A pointer to the root node of the tree to count the leaves of.
 *
 * Return: The number of leaves in the tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
    size_t leaves = 0;

    /* Check if the tree is not NULL */
    if (tree)
    {
        /* Check if the current node is a leaf (no left or right child) */
        leaves += (!tree->left && !tree->right) ? 1 : 0;

        /* Recursively count the leaves in the left and right subtrees */
        leaves += binary_tree_leaves(tree->left);
        leaves += binary_tree_leaves(tree->right);
    }

    /* Return the total number of leaves in the tree */
    return (leaves);
}

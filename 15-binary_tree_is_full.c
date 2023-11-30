#include "binary_trees.h"

/**
 * is_full_recursive - Checks if a binary tree is full recursively.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: If tree is not full, 0.
 *         Otherwise, 1.
 */
int is_full_recursive(const binary_tree_t *tree)
{
    if (tree != NULL)
    {
        /* Check if the current node has exactly one child */
        if ((tree->left != NULL && tree->right == NULL) ||
            (tree->left == NULL && tree->right != NULL) ||
            /* Recursively check if both subtrees are full */
            is_full_recursive(tree->left) == 0 ||
            is_full_recursive(tree->right) == 0)
            return (0);
    }
    /* If the current node is NULL or it has 0 or 2 children, return 1 */
    return (1);
}

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: If tree is NULL or is not full - 0.
 *         Otherwise - 1.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
    /* Check if the tree is NULL */
    if (tree == NULL)
        return (0);
    /* Call the recursive function to check if the tree is full */
    return (is_full_recursive(tree));
}

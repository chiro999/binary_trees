#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the balance factor.
 *
 * Return: If tree is NULL, return 0, else return balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
    /* Check if the tree is not NULL */
    if (tree)
        /* Calculate and return the balance factor using the heights of left and right subtrees */
        return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

    /* If tree is NULL, return 0 */
    return (0);
}

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, return 0, else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    /* Check if the tree is not NULL */
    if (tree)
    {
        /* Variables to store the height of left and right subtrees */
        size_t l = 0, r = 0;

        /* Calculate the height of the left subtree */
        l = tree->left ? 1 + binary_tree_height(tree->left) : 1;

        /* Calculate the height of the right subtree */
        r = tree->right ? 1 + binary_tree_height(tree->right) : 1;

        /* Return the maximum height of left and right subtrees, plus 1 for the current level */
        return ((l > r) ? l : r);
    }

    /* If tree is NULL, return 0 */
    return (0);
}

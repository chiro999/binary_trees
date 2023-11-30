#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0, else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    /* Check if the tree is not NULL */
    if (tree)
    {
        /* Declare variables to store the height of left and right subtrees */
        size_t l = 0, r = 0;

        /* Calculate the height of the left subtree */
        /* If the left child exists, recursively call binary_tree_height */
        /* and add 1 to the height; otherwise, the height is 0 */
        l = tree->left ? 1 + binary_tree_height(tree->left) : 0;

        /* Calculate the height of the right subtree */
        /* If the right child exists, recursively call binary_tree_height */
        /* and add 1 to the height; otherwise, the height is 0 */
        r = tree->right ? 1 + binary_tree_height(tree->right) : 0;

        /* Return the maximum height of the left and right subtrees, plus 1 */
        /* This represents the height of the current level */
        return ((l > r) ? l : r);
    }

    /* If tree is NULL, return 0 */
    return (0);
}

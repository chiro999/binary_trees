include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the size of.
 *
 * Return: The size of the tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
    size_t size = 0;

    /* Check if the tree is not NULL */
    if (tree)
    {
        /* Increment the size for the current node */
        size += 1;

        /* Recursively calculate the size of the left and right subtrees */
        size += binary_tree_size(tree->left);
        size += binary_tree_size(tree->right);
    }

    /* Return the total size of the tree */
    return (size);
}

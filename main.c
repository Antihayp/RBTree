#include <stdio.h>
#include "RBTree.h"

int main()
{
	struct rbtree *tree = NULL, *node = NULL;

	tree = rbtree_add(tree, 10, "10");
	tree = rbtree_add(tree, 5, "5");
	tree = rbtree_add(tree, 3, "3");
	tree = rbtree_add(tree, 12, "12");
	tree = rbtree_add(tree, 11, "11");
	tree = rbtree_add(tree, 6, "6");
	tree = rbtree_add(tree, 8, "8");
	tree = rbtree_add(tree, 9, "9");
	//tree = rbtree_add(tree, 13, "13");
	//tree = rbtree_add(tree, 50, "50");

	//rbtree_print_tree(tree);
	//printf("\n");

	/*node = rbtree_lookup(tree, 12);
	if (node != NULL) {
		printf("%s %p %p %p %p\n", node->value, node, node->left, node->right, node->parent);
	} else {
		printf("Error 404\n");
	}

	node = rbtree_min(tree);
	printf("Min: %s %p %p %p %p\n", node->value, node, node->right, node->left, node->parent);

	node = rbtree_max(tree);
	printf("Max: %s %p %p %p %p\n\n", node->value, node, node->right, node->left, node->parent);
	*/

	printf("Delete:\n");
	tree = rbtree_delete(tree, 12);
	rbtree_print_tree(tree);
	printf("\n");

	return 0;
}
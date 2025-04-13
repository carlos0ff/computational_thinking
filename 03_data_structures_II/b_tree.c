// b_tree.c
#include <stdio.h>
#include <stdlib.h>

#define MIN_DEGREE 2 // t = minimum degree

// B-Tree Node structure
typedef struct BTreeNode {
    int keys[2 * MIN_DEGREE - 1]; // Keys
    struct BTreeNode* children[2 * MIN_DEGREE]; // Child pointers
    int num_keys;     // Current number of keys
    int is_leaf;      // Is true when node is a leaf
} BTreeNode;

// Create a new node
BTreeNode* createNode(int is_leaf) {
    BTreeNode* node = (BTreeNode*)malloc(sizeof(BTreeNode));
    node->is_leaf = is_leaf;
    node->num_keys = 0;
    for (int i = 0; i < 2 * MIN_DEGREE; i++) {
        node->children[i] = NULL;
    }
    return node;
}

// Traverse the tree
void traverse(BTreeNode* root) {
    if (!root) return;
    int i;
    for (i = 0; i < root->num_keys; i++) {
        if (!root->is_leaf) {
            traverse(root->children[i]);
        }
        printf("%d ", root->keys[i]);
    }
    if (!root->is_leaf)
        traverse(root->children[i]);
}

// Split the child
void splitChild(BTreeNode* parent, int i, BTreeNode* child) {
    BTreeNode* new_child = createNode(child->is_leaf);
    new_child->num_keys = MIN_DEGREE - 1;

    for (int j = 0; j < MIN_DEGREE - 1; j++)
        new_child->keys[j] = child->keys[j + MIN_DEGREE];

    if (!child->is_leaf) {
        for (int j = 0; j < MIN_DEGREE; j++)
            new_child->children[j] = child->children[j + MIN_DEGREE];
    }

    child->num_keys = MIN_DEGREE - 1;

    for (int j = parent->num_keys; j >= i + 1; j--)
        parent->children[j + 1] = parent->children[j];

    parent->children[i + 1] = new_child;

    for (int j = parent->num_keys - 1; j >= i; j--)
        parent->keys[j + 1] = parent->keys[j];

    parent->keys[i] = child->keys[MIN_DEGREE - 1];
    parent->num_keys++;
}

// Insert into non-full node
void insertNonFull(BTreeNode* node, int key) {
    int i = node->num_keys - 1;

    if (node->is_leaf) {
        while (i >= 0 && key < node->keys[i]) {
            node->keys[i + 1] = node->keys[i];
            i--;
        }
        node->keys[i + 1] = key;
        node->num_keys++;
    } else {
        while (i >= 0 && key < node->keys[i])
            i--;

        if (node->children[i + 1]->num_keys == 2 * MIN_DEGREE - 1) {
            splitChild(node, i + 1, node->children[i + 1]);

            if (key > node->keys[i + 1])
                i++;
        }
        insertNonFull(node->children[i + 1], key);
    }
}

// Insert key into B-Tree
BTreeNode* insert(BTreeNode* root, int key) {
    if (root->num_keys == 2 * MIN_DEGREE - 1) {
        BTreeNode* new_root = createNode(0);
        new_root->children[0] = root;
        splitChild(new_root, 0, root);
        insertNonFull(new_root, key);
        return new_root;
    } else {
        insertNonFull(root, key);
        return root;
    }
}

// MAIN
int main() {
    BTreeNode* root = createNode(1);

    int keys[] = {10, 20, 5, 6, 12, 30, 7, 17};
    int n = sizeof(keys) / sizeof(keys[0]);

    for (int i = 0; i < n; i++) {
        root = insert(root, keys[i]);
    }

    printf("B-Tree traversal:\n");
    traverse(root);
    printf("\n");

    return 0;
}

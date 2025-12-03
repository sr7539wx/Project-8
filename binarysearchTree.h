#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_H

#include <iostream>
#include <functional>
using namespace std;

template<class ItemType>
class BinaryNode {
public:
    ItemType item;
    BinaryNode<ItemType>* left;
    BinaryNode<ItemType>* right;

    BinaryNode(const ItemType& it)
        : item(it), left(nullptr), right(nullptr) {}
};

template<class ItemType>
class BinarySearchTree {
private:
    BinaryNode<ItemType>* root;

    // recursive helper for insertion
    BinaryNode<ItemType>* insert(BinaryNode<ItemType>* node, const ItemType& item) {
        if (!node) return new BinaryNode<ItemType>(item);

        if (item < node->item)
            node->left = insert(node->left, item);
        else
            node->right = insert(node->right, item);

        return node;
    }

    // inorder traversal
    void inorder(BinaryNode<ItemType>* node, function<void(ItemType&)> visit) const {
        if (!node) return;
        inorder(node->left, visit);
        visit(node->item);
        inorder(node->right, visit);
    }

    // preorder traversal
    void preorder(BinaryNode<ItemType>* node, function<void(ItemType&)> visit) const {
        if (!node) return;
        visit(node->item);
        preorder(node->left, visit);
        preorder(node->right, visit);
    }

public:
    BinarySearchTree() : root(nullptr) {}

    void add(const ItemType& item) {
        root = insert(root, item);
    }

    void inorderTraverse(function<void(ItemType&)> visit) const {
        inorder(root, visit);
    }

    void preorderTraverse(function<void(ItemType&)> visit) const {
        preorder(root, visit);
    }
};

#endif

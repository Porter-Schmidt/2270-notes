#include <iostream>
using namespace std;

// bst delete node
// 4 cases: no children, only a right child, only a left child, and two children
// no children: just delete the node
// only a right child: replace the node with its right child
// only a left child: replace the node with its left child
// two children: hard
Node* BST::deleteNode(Node* currNode, int value) {
    if (currNode == nullptr) {
        return nullptr;
    }
    else if (value < currNode->key) {
        currNode->left = deleteNodeHelper(currNode->left, value);
    }
    else if (value > currNode->key) {
        currNode->right = deleteNodeHelper(currNode->right, value);
    }
    else {
        // found it
        // case 1: no children
        if (currNode->left == nullptr && currNode->right == nullptr) {
            delete currNode;
            return nullptr;
        }
        // case 2: only a right child
        else if (currNode->left == nullptr) {
            Node* temp = currNode->right;
            delete currNode;
            return temp;
        }
        // case 3: only a left child
        else if (currNode->right == nullptr) {
            Node* temp = currNode->left;
            delete currNode;
            return temp;
        }
        // case 4: two children
        // wednesday

        
    }
}